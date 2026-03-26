#ifndef COMMIS_H
#define COMMIS_H
#include "Employ.h"

class CommissionWorker :public Employee {
public:
	CommissionWorker(const char*, const char*,Date,int,
					float = 0.0, float = 0.0, unsigned = 0);

	void setSalary(float);
	void setCommision(float);
	void setQuantity(unsigned);

	virtual float salaryIncreaser(int);
	virtual float earnings() const;
	virtual void print() const;
private:
	float salary;
	float commission;
	unsigned quantity;
};
#endif