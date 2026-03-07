#ifndef INTEGERSET_H
#define INTEGERSET_H

class IntegerSet {
private:
	static const int ARRAY_SIZE = 101;
	int integersSetArray[ARRAY_SIZE];
public:
	IntegerSet();

	IntegerSet unionOfIntegerSet(IntegerSet);
	IntegerSet interestionOfIntegerSets(IntegerSet);

	void insertElement(int);
	void deleteElement(int);
	void setPrint();

	bool isEqualTo(IntegerSet);
};
#endif 
