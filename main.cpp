#include <iostream>
#include <string>
#include <vector>
class Student
{
	std::string firstName;
	std::string lastName;
	int gradYear;
	float GPA;
	std::string gradSemester;
	int enrolledYear;
	std::string enrolledSemester;
	std::string studentStatus; //undergrad or grad check
	
	public:
	Student() : firstName("placeholder"), lastName("placeholder"), gradYear(0), GPA(0.0), gradSemester("placeholder"), enrolledYear(0), enrolledSemester("placeholder"), studentStatus("placeholder") {}

	//Setters
	void setFirstName(std::string fName) { firstName = fName; }
	void setLastName(std::string lName) { lastName = lName; }
	void setGradYear(int year) { gradYear = year; }
	void setGPA(int tempgpa) { GPA = tempgpa; }
	void setGradSemester(std::string Sem) { gradSemester = Sem; }
	void setEnrolledYear(int enYear) { enrolledYear = enYear; }
	void setEnrolledSemester(std::string enSem) { enrolledSemester = enSem; } 
	void setStudentStatus(std::string sStatus) { studentStatus = sStatus; } 

	//print
	void printInfo() {
		std::cout << "\nName: " << firstName << " " << lastName << "\nGraduation Year and Semester: " << gradYear << " " << gradSemester << "\nEnrolled Year and Semester: " << enrolledYear << " " << enrolledSemester << "\nStudent Status: " << studentStatus << std::endl;

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
		if (concentration == "Biophysics" || concentration == "Earth and Planetary Sciences" || concentration == "Astrophysics" || concentration == "Applied")
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
	
	//vector creation
	std::vector<Art_Student *> art_students;
	std::vector<Physics_Student *> physics_students;
	
	//Allocating for 5 art student objects in vector	
	for (int i = 0; i < 5; i++){
		art_students.push_back(new Art_Student);
	}
	//Allocating for 5 physics student objects in vector
	for (int i = 0; i < 5; i++){
		physics_students.push_back(new Physics_Student);
	}

	//Assigning information to vectors
	std::string artstudent_firstnames[5] = {"Adrian", "Matthew", "Caroline", "Asuka", "Carlos"};
	float artstudent_gpa[5] = {3.9, 3.5, 3.2, 3.8, 4.0};
	std::string artstudent_lastnames[5] = {"Martinez", "Johnson", "Whethers", "Tano", "Garcia"};
	std::string artstudent_gradsemesters[5] = {"Spring", "Spring", "Spring", "Spring", "Spring"};
	int artstudent_gradyears[5] = {2027, 2028, 2029, 2026, 2027};
	std::string artstudent_enrolledsemester[5] = {"Fall", "Fall", "Fall", "Fall", "Fall"};
	int artstudent_enrolledYear[5] = {2026, 2026, 2026, 2026, 2026};
	std::string artstudent_status[5] = {"Grad", "Undergrad", "Undergrad", "Grad", "Grad"}; 

	for (int i = 0; i < 5; i++){
		art_students[i]->setFirstName(artstudent_firstnames[i]);
		art_students[i]->


 /* 
  .
  .
  outfile = open("student_info.dat",std::ios::write);
  for(int i = 0; i < art_students.size(); i++)
*/	
	return 0;
}

