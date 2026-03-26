#ifndef PIECE_H
#define PIECE_H
#include "Employ.h"

class PieceWorker :public Employee {
public:
	PieceWorker(const char*, const char*,Date,int,
		float = 0.0, unsigned = 0);
	void setWage(float);
	void setQuantity(unsigned);
	
	virtual float earnings() const;
	virtual void print() const;
	virtual float salaryIncreaser(int);
private:
	float wagePerPiece;
	unsigned quantity;
};
#endif