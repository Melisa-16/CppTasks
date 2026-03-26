#ifndef EMPLOY_H
#define EMPLOY_H

struct Date {
	int day;
	int month;
	int year;
};

class Employee {
public:
	Employee(const char *, const char *,Date,int);
	~Employee();
	const char *getFirstName() const;
	const char *getLastName() const;

	virtual float earnings() const = 0;
	virtual void print() const = 0;
	virtual float salaryIncreaser(int) = 0;

	Date getDate();
	bool dateChecker(int); 
private:
	char *firstName;
	char *lastName;
	Date birthDate;
	int departmentCode;
protected:
	const float BIRTHDAY_BONUS = 100;
};
#endif