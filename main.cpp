#include <iostream>
#include <string>
#include <vector>
#include <fstream>
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
	float setGPA(float tempgpa) { GPA = tempgpa; return GPA; }
	void setGradSemester(std::string Sem) { gradSemester = Sem; }
	void setEnrolledYear(int enYear) { enrolledYear = enYear; }
	void setEnrolledSemester(std::string enSem) { enrolledSemester = enSem; } 
	void setStudentStatus(std::string sStatus) { studentStatus = sStatus; } 

	//Getters
	std::string getFirstName() const { return firstName; }
	std::string getLastName() const { return lastName; }
	int getGradYear() const { return gradYear; }
	float getGPA() const { return GPA; }
	std::string getGradSemester() const { return gradSemester; }
	int getEnrolledYear() const { return enrolledYear; }
	std::string getEnrolledSemester() const { return enrolledSemester; }
	std::string getStudentStatus() const { return studentStatus; }

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
	//Getter
	std::string getArtEmphasis() const { return art_emphasis; }
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
	//Getter for concentration
	std::string getPhysicsConcentration() const { return physics_concentration; }
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

	//Assigning information to art vector
	std::string artstudent_firstNames[5] = {"Adrian", "Matthew", "Caroline", "Asuka", "Carlos"};
	float artstudent_gpa[5] = {3.9, 3.5, 3.2, 3.8, 4.0};
	std::string artstudent_lastNames[5] = {"Martinez", "Johnson", "Whethers", "Tano", "Garcia"};
	std::string artstudent_gradSemesters[5] = {"Spring", "Spring", "Spring", "Spring", "Spring"};
	int artstudent_gradYears[5] = {2027, 2028, 2029, 2026, 2027};
	std::string artstudent_enrolledSemester[5] = {"Fall", "Fall", "Fall", "Fall", "Fall"};
	int artstudent_enrolledYear[5] = {2026, 2026, 2026, 2026, 2026};
	std::string artstudent_status[5] = {"Grad", "Undergrad", "Undergrad", "Grad", "Grad"};
	std::string emphasis[5] = {"Art Studio", "Art Studio", "Art Education", "Art Education", "Art History"};


	for (int i = 0; i < 5; i++){
		art_students[i]->setFirstName(artstudent_firstNames[i]);
		art_students[i]->setLastName(artstudent_lastNames[i]);
		art_students[i]->setGradYear(artstudent_gradYears[i]);
		art_students[i]->setGPA(artstudent_gpa[i]);
		art_students[i]->setGradSemester(artstudent_gradSemesters[i]);
		art_students[i]->setEnrolledYear(artstudent_enrolledYear[i]);
		art_students[i]->setEnrolledSemester(artstudent_enrolledSemester[i]);
		art_students[i]->setStudentStatus(artstudent_status[i]);
		art_students[i]->setArtEmphasis(emphasis[i]);
	}

	//Assigning information to physics vector
 	std::string physicsstudent_firstNames[5] = {"Keo", "Alex", "Kenyatta", "Dani", "George"};
	float physicsstudent_gpa[5] = {3.5, 3.9, 3.6, 3.9, 3.8};
	std::string physicsstudent_lastNames[5] = {"Nguyen", "Gowin", "Frazier Jr", "Smith", "Miller"};
	std::string physicsstudent_gradSemesters[5] = {"Fall", "Spring", "Spring", "Fall", "Spring"};
	int physicsstudent_gradYears[5] = {2026, 2027, 2029, 2026, 2028};
	std::string physicsstudent_enrolledSemester[5] = {"Fall", "Fall", "Fall", "Fall", "Fall"};
	int physicsstudent_enrolledYear[5] = {2026, 2026, 2026, 2026, 2026};
	std::string physicsstudent_status[5] = {"Grad", "Grad", "Undergrad", "Grad", "Undergrad"};
	std::string concentration[5] = {"Earth and Planetary Sciences", "Biophysics", "Astrophysics", "Applied", "Biophysics"};

	for (int i = 0; i < 5; i++){
		physics_students[i]->setFirstName(physicsstudent_firstNames[i]);
		physics_students[i]->setLastName(physicsstudent_lastNames[i]);
		physics_students[i]->setGradYear(physicsstudent_gradYears[i]);
		physics_students[i]->setGPA(physicsstudent_gpa[i]);
		physics_students[i]->setGradSemester(physicsstudent_gradSemesters[i]);
		physics_students[i]->setEnrolledYear(physicsstudent_enrolledYear[i]);
		physics_students[i]->setEnrolledSemester(physicsstudent_enrolledSemester[i]);
		physics_students[i]->setStudentStatus(physicsstudent_status[i]);
		physics_students[i]->setPhysicsConcentration(concentration[i]);
	}
	std::ofstream outfile;
	outfile.open("student_info.dat",std::ios::out);
	outfile << "----------REPORT OF ALL STUDENTS----------\n" << std::endl;
	outfile << "-Art Major Students-\n" << std::endl;

  	for(int i = 0; i < art_students.size(); i++){
		outfile << "(" << art_students[i]->getFirstName() << " " << art_students[i]->getLastName() << ")" << std::endl;
                outfile << "GPA: " << art_students[i]->getGPA() << std::endl;
		outfile << "Current Semester Enrolled: " << art_students[i]->getEnrolledSemester() << std::endl;
		outfile << "Current Year Enrolled: " << art_students[i]->getEnrolledYear() << std::endl;
		outfile << "Art Area: " << art_students[i]->getArtEmphasis() << std::endl;
		outfile << "Currently a " << art_students[i]->getStudentStatus() << "." << std::endl;
		outfile << "Expected Graduating Year: " << art_students[i]->getGradYear() << std::endl;
		outfile << "Expected Grad Semester: " << art_students[i]->getGradSemester() << "\n" << std::endl;

	}

	outfile << "\n-Physics Major Students-\n" << std::endl;
	for(int i = 0; i < art_students.size(); i++){
                outfile << "(" << physics_students[i]->getFirstName() << " " << physics_students[i]->getLastName() << ")" << std::endl;
		outfile << "GPA: " << physics_students[i]->getGPA() << std::endl;
		outfile << "Current Semester Enrolled: " << physics_students[i]->getEnrolledSemester() << std::endl;
		outfile << "Current Year Enrolled: " <<  physics_students[i]->getEnrolledYear() << std::endl;
		outfile << "Currently a " << physics_students[i]->getStudentStatus() << "." << std::endl;
                outfile << "Expected Graduating Year: " << physics_students[i]->getGradYear() << std::endl;
                outfile << "Expected Grad Semester: " << physics_students[i]->getGradSemester() << "\n" << std::endl;
	}
	outfile.close();

	return 0;
}

