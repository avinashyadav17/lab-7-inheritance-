#include<iostream>
using namespace std;

class Base1 {
public:
    Base1() {
        cout << "Base1 class constructor called." << endl;
    }

    ~Base1() {
        cout << "Base1 class destructor called." << endl;
    }
};

class Base2 {
public:
    Base2() {
        cout << "Base2 class constructor called." << endl;
    }

    ~Base2() {
        cout << "Base2 class destructor called." << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    Derived() {
        cout << "Derived class constructor called." << endl;
    }

    ~Derived() {
        cout << "Derived class destructor called." << endl;
    }
};

int main() {
    Derived d;
    return 0;
}
