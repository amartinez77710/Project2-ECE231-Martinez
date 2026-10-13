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
	
	//5 Art Student Objects
	Art_Student as1;
	as1.setFirstName("Adrian");
	as1.setLastName("Martinez");
	as1.setGradYear(2027);
	as1.setGradSemester("Spring");
	as1.setEnrolledYear(2026);
	as1.setEnrolledSemester("Fall");
	as1.setStudentStatus("Grad");
	as1.setArtEmphasis("Art Studio");

	Art_Student as2;
	as2.setFirstName("Alice");
        as2.setLastName("Smith");
        as2.setGradYear(2029);
        as2.setGradSemester("Spring");
        as2.setEnrolledYear(2026);
        as2.setEnrolledSemester("Fall");
        as2.setStudentStatus("Undergrad");
        as2.setArtEmphasis("Art History");

	Art_Student as3;
	as3.setFirstName("Joseph");
        as3.setLastName("Conner");
        as3.setGradYear(2028);
        as3.setGradSemester("Spring");
        as3.setEnrolledYear(2026);
        as3.setEnrolledSemester("Fall");
        as3.setStudentStatus("Grad");
        as3.setArtEmphasis("Art Education");

	Art_Student as4;
	as4.setFirstName("George");
        as4.setLastName("Miller");
        as4.setGradYear(2027);
        as4.setGradSemester("Spring");
        as4.setEnrolledYear(2026);
        as4.setEnrolledSemester("Fall");
        as4.setStudentStatus("Grad");
        as4.setArtEmphasis("Art Studio");

	Art_Student as5;
	as5.setFirstName("Hollis");
        as5.setLastName("Frazier-Herndon");
        as5.setGradYear(2027);
        as5.setGradSemester("Spring");
        as5.setEnrolledYear(2026);
        as5.setEnrolledSemester("Fall");
        as5.setStudentStatus("Grad");
        as5.setArtEmphasis("Art Education");
	 
	//5 Physics Student Object
	Physics_Student ps1;
        ps1.setFirstName("Roman");
        ps1.setLastName("Martinez");
        ps1.setGradYear(2027);
        ps1.setGradSemester("Spring");
        ps1.setEnrolledYear(2026);
        ps1.setEnrolledSemester("Fall");
        ps1.setStudentStatus("Grad");
        ps1.setPhysicsConcentration("Applied");

        Physics_Student ps2;
        ps2.setFirstName("Cassie");
        ps2.setLastName("Castillo");
        ps2.setGradYear(2029);
        ps2.setGradSemester("Spring");
        ps2.setEnrolledYear(2026);
        ps2.setEnrolledSemester("Fall");
        ps2.setStudentStatus("Undergrad");
        ps2.setPhysicsConcentration("Astrophysics");

        Physics_Student ps3;
        ps3.setFirstName("Seth");
        ps3.setLastName("Bradley");
        ps3.setGradYear(2028);
        ps3.setGradSemester("Spring");
        ps3.setEnrolledYear(2026);
        ps3.setEnrolledSemester("Fall");
        ps3.setStudentStatus("Grad");
        ps3.setPhysicsConcentration("Applied");

       	Physics_Student ps4;
        ps4.setFirstName("Asuki");
        ps4.setLastName("Yamamoto");
        ps4.setGradYear(2027);
        ps4.setGradSemester("Spring");
        ps4.setEnrolledYear(2026);
        ps4.setEnrolledSemester("Fall");
        ps4.setStudentStatus("Grad");
        ps4.setPhysicsConcentration("Biophysics");

        Physics_Student ps5;
        ps5.setFirstName("Kenyatta");
        ps5.setLastName("Frazier Jr");
        ps5.setGradYear(2027);
        ps5.setGradSemester("Spring");
        ps5.setEnrolledYear(2026);
        ps5.setEnrolledSemester("Fall");
        ps5.setStudentStatus("Grad");
        ps5.setPhysicsConcentration("Earth and Planetary Sciences");

	//
	return 0;
}

