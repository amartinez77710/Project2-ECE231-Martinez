#include <iostream>
#include <string>
class Student
{
	std::string firstName;
	std::string lastName;
	int gradYear;
	std::string gradSemester;
	int enrolledYear;
	std::string enrolledSemester;
	std::string studentStatus; //undergrad or grad check
	
	public:
	Student() : firstName("placeholder"), lastName("placeholder"), gradYear(0), gradSemester("placeholder"), enrolledYear(0), enrolledSemester("placeholder"), studentStatus("placeholder") {}

	//Setters
	void setFirstName(std::string fName) { firstName = fName; }
	void setLastName(std::string lName) { lastName = lName; }
	void setGradYear(int year) { gradYear = year; }
	void setGradSemester(std::string Sem) { gradSemester = Sem; }
	void setEnrolledYear(int enYear) { enrolledYear = enYear; }
	void setEnrolledSemester(std::string enSem) { enrolledSemester = enSem; } 
	void setStudentStatus(std::string sStatus) { studentStatus = sStatus; } 

	//print
	void printInfo() {
		std::cout << "Name: " << firstName << " " << lastName << "\nGraduation Year and Semester: " << gradYear << " " << gradSemester << "\nEnrolled Year and Semester: " << enrolledYear << " " << enrolledSemester << "\nStudent Status: " << studentStatus << std::endl;

	}
};

class Art_Student : public Student{
	//Emphasis derive
	std::string art_emphasis;
	
	public:
	Art_Student() : Student(), art_emphasis("Placeholder") {}

	//Setter
	void setArtEmphasis(std::string emphasis){
		if (emphasis == "Art Studio" || emphasis == "Art History" || emphasis == "Art Education")
			art_emphasis = emphasis;
		else
			std::cout << "not valid emphasis for art student" << std::endl;
	}
	void printInfo() {
		Student::printInfo();
		std::cout << "Major Emphasis : " << art_emphasis << std::endl;	
	}
};

class Physics_Student : public Student{
	//Emphasis derive
	std::string physics_concentration;

	public:
	Physics_Student() : Student(), physics_concentration("Placeholder") {}

	//Setter
	void setPhysicsConcentration(std::string concentration){
		if (concentration == "Biophysics" || concentration == "Earth and Planetary Sciences")
			physics_concentration = concentration;
		else
			std::cout << "not valid concentration for physics student" << std::endl;
	}
	//print
	void printInfo(){
		Student::printInfo();
		std::cout << "Concentration: " << physics_concentration << std::endl;
	}
};




int main(){

	Art_Student s1;
	s1.setFirstName("Adrian");
	s1.setLastName("Martinez");
	s1.setGradYear(2025);
	s1.setGradSemester("Spring");
	s1.setEnrolledYear(2024);
	s1.setEnrolledSemester("Fall");
	s1.setStudentStatus("Undergrad");
	s1.setArtEmphasis("Art Studio");
	
	s1.printInfo();
	 
	
	return 0;
}

