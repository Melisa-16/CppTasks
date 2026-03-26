#ifndef BOSS_H
#define BOSS_H
#include "Employ.h"

class Boss :public Employee {
public:
	Boss(const char*, const char*, Date, int, float = 0.0);
	void setWeeklySalary(float);

	virtual float earnings() const;
	virtual void print() const;
	virtual float salaryIncreaser(int);
private:
	float weeklySalary;
};
#endif
