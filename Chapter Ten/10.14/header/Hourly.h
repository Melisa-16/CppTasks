#ifndef HOURLY_H
#define HOURLY_H
#include "Employ.h"

class HourlyWorker :public Employee {
public:
	HourlyWorker(const char*, const char*,Date,int,
		float = 0.0, float = 0.0);
	void setWage(float);
	void setHours(float);

	virtual float earnings() const;
	virtual void print() const;
	virtual float salaryIncreaser(int);
private:
	float wage;
	float hours;
};
#endif