#include <iostream>

using namespace std;

class BaseClass {
public:
	BaseClass() {
		cout << "Base class constructor\n";
	}
	~BaseClass() {
		cout << "Base class destructor\n";
	}
};

class FirstDerivedClass : public BaseClass {
public:
	FirstDerivedClass() {
		cout << "Derived class constructor\n";
	}
	~FirstDerivedClass() {
		cout << "Derived class destructor\n";
	}
};

class SecondDerivedClass : public FirstDerivedClass {
public:
	SecondDerivedClass() {
		cout << "Derived class of derived class constructor\n";
	}
	~SecondDerivedClass() {
		cout << "Derived class of derived class destructor\n";
	}
};

int main() {
	SecondDerivedClass child;
	return 0;
}