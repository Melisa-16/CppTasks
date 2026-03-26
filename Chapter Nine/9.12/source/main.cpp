#include <iostream>
#include <iomanip>
#include "Faculty.h"
#include "SupportStaff.h"
#include "GraduateStudent.h"
#include "Freshman.h"
#include "Sophomore.h"
#include "Junior.h"
#include "Senior.h"

using namespace std;

int main() {

    // employees
    cout << fixed << setprecision(0);

    Faculty professor("Artyom", "Sahakyan", 42, 550000, "Physics", "Professor");
    Faculty lecturer("Maria", "Khachatryan", 37, 480000, "Mathematics", "Lecturer");

    SupportStaff techSpecialist("Vahagn", "Karapetyan", 35, 320000, "Technical Support");
    SupportStaff librarian("Narine", "Avetisyan", 56, 200000, "Library");

    cout << "\tEmployees \n";

    cout << endl << "Faculty staff:" << endl;

    cout << professor.getName() << " " << professor.getSurname() << endl
        << "   Age: " << professor.getAge() << endl
        << "   Salary: " << professor.getSalary() << " AMD" << endl
        << "   Department: " << professor.getFacultyName() << endl
        << "   Position: " << professor.getPosition() << endl;

    cout << lecturer.getName() << " " << lecturer.getSurname() << endl
        << "   Age: " << lecturer.getAge() << endl
        << "   Salary: " << lecturer.getSalary() << " AMD" << endl
        << "   Department: " << lecturer.getFacultyName() << endl
        << "   Position: " << lecturer.getPosition() << endl;

    cout << endl << "Support staff:" << endl;

    cout << techSpecialist.getName() << " " << techSpecialist.getSurname() << endl
        << "   Age: " << techSpecialist.getAge() << endl
        << "   Salary: " << techSpecialist.getSalary() << " AMD" << endl
        << "   Department: " << techSpecialist.getJobName() << endl;

    cout << librarian.getName() << " " << librarian.getSurname() << endl
        << "   Age: " << librarian.getAge() << endl
        << "   Salary: " << librarian.getSalary() << " AMD" << endl
        << "   Department: " << librarian.getJobName() << endl;

    //students
    
    Freshman freshman("Garegin", "Abrahamyan", 18, "IT specialist", 92, 2025, 4, 1500000, 25000);
    Sophomore sophomore("Mariam", "Karapetyan", 19, "Management", 87, 2024, 3, 1000000, 15600);
    Junior junior("Ruben", "Kirakosyan", 20, "Chemistry",97,2023, 2, 2000000, 35000);
    Senior senior("Anahit", "Hovhannisyan", 21, "Economics", 90, 2022, 4, 1700000, 10000);
    GraduateStudent graduatedStudent("Vahe", "Mirzoyan", 25, "languages", 67, 2018, 2022, 0, 780000, 8000);

    cout << endl << endl << "\tStudents" << endl;

    cout <<freshman.getCourse() << " student: " 
        << freshman.getName() << " " << freshman.getSurname() << endl
        << "Age: " << freshman.getAge() << endl
        << "Profession: " << freshman.getProfession() << endl
        << "Average Mark: " << freshman.getAverageMark() << endl
        << "Year of Admission: " << freshman.getAdmissionYear() << endl
        << "Credits: " << freshman.getCredits() << endl
        << "Tuition: " << freshman.getTuition() << " AMD" << endl
        << "Stipend: " << freshman.getStipend() << " AMD" << endl
        << endl;

    cout << sophomore.getCourse() << " student: " 
        << sophomore.getName() << " " << sophomore.getSurname() << endl
        << "Age: " << sophomore.getAge() << endl
        << "Profession: " << sophomore.getProfession() << endl
        << "Average Mark: " << sophomore.getAverageMark() << endl
        << "Year of Admission: " << sophomore.getAdmissionYear() << endl
        << "Credits: " << sophomore.getCredits() << endl
        << "Tuition: " << sophomore.getTuition() << " AMD" << endl
        << "Stipend: " << sophomore.getStipend() << " AMD" << endl
        << endl;

    cout << junior.getCourse() << " student: " 
        << junior.getName() << " " << junior.getSurname() << endl
        << "Age: " << junior.getAge() << endl
        << "Profession: " << junior.getProfession() << endl
        << "Average Mark: " << junior.getAverageMark() << endl
        << "Year of Admission: " << junior.getAdmissionYear() << endl
        << "Credits: " << junior.getCredits() << endl
        << "Tuition: " << junior.getTuition() << " AMD" << endl
        << "Stipend: " << junior.getStipend() << " AMD" << endl
        << endl;

    cout << senior.getCourse() << " student: " 
        << senior.getName() << " " << senior.getSurname() << endl
        << "Age: " << senior.getAge() << endl
        << "Profession: " << senior.getProfession() << endl
        << "Average Mark: " << senior.getAverageMark() << endl
        << "Year of Admission: " << senior.getAdmissionYear() << endl
        << "Credits: " << senior.getCredits() << endl
        << "Tuition: " << senior.getTuition() << " AMD" << endl
        << "Stipend: " << senior.getStipend() << " AMD" << endl
        << endl;

    cout << graduatedStudent.getName() << " " << graduatedStudent.getSurname() << endl
        << "Age: " << graduatedStudent.getAge() << endl
        << "Profession: " << graduatedStudent.getProfession() << endl
        << "Average Mark: " << graduatedStudent.getAverageMark() << endl
        << "Year of Admission: " << graduatedStudent.getAdmissionYear() << endl
        << "Graduation Year: " << graduatedStudent.getGraduationYear() << endl
        << "Credits: " << graduatedStudent.getCredits() << endl
        << "Tuition: " << graduatedStudent.getTuition() << " AMD" << endl
        << "Stipend: " << graduatedStudent.getStipend() << " AMD" << endl
        << endl;

    return 0;
}
