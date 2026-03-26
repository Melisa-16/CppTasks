#include <iostream>
#include "Piece.h"

using namespace std;

PieceWorker::PieceWorker(const char* first, const char* last,Date birthday,int code,
	float w, unsigned q) :Employee(first, last,birthday,code) {
	wagePerPiece = w > 0 ? w : 0;
	quantity = q > 0 ? q : 0;
}
void PieceWorker::setWage(float w) {
	wagePerPiece = w > 0 ? w : 0;
}
void PieceWorker::setQuantity(unsigned q) {
	quantity = q > 0 ? q : 0;
}
float PieceWorker::earnings() const {
	return quantity * wagePerPiece;
}
void PieceWorker::print() const {
	cout << endl << "        Piece worker: "
		<< getFirstName() << " " << getLastName();
}
float PieceWorker::salaryIncreaser(int currentMonth) {
	float totalWage;
	if (dateChecker(currentMonth) ){
		totalWage = earnings() + BIRTHDAY_BONUS;
		return totalWage;
	}
	return earnings();
}