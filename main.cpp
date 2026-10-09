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

/*class Art_Student : class Student{
	std::string art_emphasis;
	public:
	Art_Student() : Student(), art_emphasis("Art Studio") {}


       	

}

class Physics_Student : class Student{
}
*/



int main(){

	Student s1;
	s1.setFirstName("Adrian");
	s1.setLastName("Martinez");
	s1.setGradYear(2025);
	s1.setGradSemester("Spring");
	s1.setEnrolledYear(2024);
	s1.setEnrolledSemester("Fall");
	s1.setStudentStatus("Undergrad");

	s1.printInfo();
	
	return 0;
}

