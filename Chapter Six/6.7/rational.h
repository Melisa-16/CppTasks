#ifndef RATIONAL_H
#define RATIONAL_H

class rational {
private:
    int numerator;
    int denominator;
public:
    rational(int = 1, int = 1);

    rational adding(rational);
    rational subtraction(rational);
    rational multiplying(rational);
    rational division(rational);

    void printingAsFraction();
    void printingAsFloatNumber();

    void simplify(int, int, int);
    int maximumDividerFinder(int, int);
};

#endif
