#ifndef STUDENT_H
#define STUDENT_H

#include "MemberOfSociety.h"

using namespace std;

class Student : public MemberOfSociety {
protected:
    string profession;
    double averageMark;
    int yearOfAdmission;
    int credits;
    double stipend;
    double tuition;
public:
    Student(string, string,
            int, string,
            double, int,
            int, double, 
            double);

    string getProfession();
    double getStipend();
    double getTuition();
    double getAverageMark();
    int getAdmissionYear();
    int getCredits();
    
    void setStipend(double);
    void setTuition(double);
    void setAverageMark(double);
    void setCredit(int);
    void setProfession(string);
};

#endif