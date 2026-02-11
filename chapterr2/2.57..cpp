//(Morgan's Laws) In this chapter, we have examined the logical operators
//    &&, and !.Morgan's laws sometimes help to express
//    logical expressions in a more convenient form.These laws
//    state that the expression !(expression l && expression 2) is logically
//    equivalent to the expression(!expression1 || !expression2).An analogous
//    expression !(expression 1 || expression 2) is equivalent
//    to the expression(!Expression1 && !expression2).Use
//    Morgane's laws to write expressions equivalent to each of
//    the following, and then write a program that shows
//    in each case, the equivalence of the original and new
//    expressions would be :
//    a) !(x < 5) & !(y >= 7)
//    b) !(a == b) !(g != 5)
//    c) !((x <= 8) && (y > 4))
//    d) !((i > 4) || (j <= 6))

#include <iostream>

using namespace std;

int main() {

    int x;
    int y;
    int a;
    int b;
    int g;
    int i;
    int j;


    x = 6;
    y = 7;
    a = 3;
    b = 3;
    g = 5;
    i = 5;
    j = 7;

    // a)

    bool firstExpression;
    firstExpression = !(x < 5) && !(y >= 7);

    bool secondExpression;
    secondExpression = !((x < 5) || (y >= 7));

    cout << "a) " << (firstExpression == secondExpression) << endl;

    // b)

    bool thirdExpression;
    thirdExpression = !(a == b) || !(g != 5);

    bool fourthExpression;
    fourthExpression = !((a == b) && (g != 5));

    cout << "b) " << (thirdExpression == fourthExpression) << endl;

    // c)

    bool fifthExpression;
    fifthExpression = !((x <= 8) && (y > 4));

    bool sixthExpression;
    sixthExpression= !(x <= 8) || !(y > 4);

    cout << "c) " << (fifthExpression == sixthExpression) << endl;

    // d)

    bool seventhExpression;
    seventhExpression = !((i > 4) || (j <= 6));
    
    bool eighthExpression;
    eighthExpression = !(i > 4) && !(j <= 6);

    cout << "d) " << (seventhExpression == eighthExpression) << endl;

    return 0;
}
