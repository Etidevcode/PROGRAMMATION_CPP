// Section 16 : Interfaces - Complete

#include <iostream>


using namespace std;

// This will use dynamic polymorphism for the with withdraw method
// We'll learn about virtual functions in the next video

class I_Printable{
    friend ostream &operator << (ostream &os, const I_Printable &obj);
public:
    virtual void print(ostream &os) const = 0;
};

ostream &operator << (ostream &os, const I_Printable &obj){
    obj.print(os);
    return os;
}

class Account:public I_Printable {

public:
    virtual void withdraw(double amount) {
        std::cout << "In Account::withdraw" << std::endl;
    }
    virtual void print(ostream &os) const override {
        os << "Account display";
    }
    virtual ~Account() {  std::cout << "Account::destructor" << std::endl; }
};


class Checking: public Account  {

public:
    virtual void withdraw(double amount) {
        std::cout << "In Checking::withdraw" << std::endl;
    }
     virtual void print(ostream &os) const override {
        os << "Checking display";
    }
    virtual ~Checking() { std::cout << "Checking::destructor" << std::endl;}
};


class Savings: public Account  {
   
public:
    virtual void withdraw(double amount) {
        std::cout << "In Savings::withdraw" << std::endl;
    }
     virtual void print(ostream &os) const override {
        os << "Savings display";
    }
    virtual ~Savings() { std::cout << "Savings::destructor" << std::endl; }
};


class Trust: public Account  {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Trust::withdraw" << std::endl;
    }
    virtual void print(ostream &os) const override {
        os << "Trust display";
    }
    virtual ~Trust() { std::cout << "Trust::destructor" << std::endl; }
};

class Dog:public I_Printable{

public:
     virtual void print(ostream &os) const override {
        os << "Woof woof";
    }
};

void print(const I_Printable &obj){
    cout << obj << endl;
}

int main(){
  
    Dog *dog = new Dog();
    cout << *dog << endl;
    
    print(*dog);
    
    Account *p1 = new Account();
    cout << *p1 << endl;
    
    Account *p2 = new Checking();
    cout << *p2 << endl;
    /*
    Account a;
    cout << a << endl;
    
    Checking c;
    cout << c << endl;
    
    Savings s;
    cout << s << endl;
    
    Trust t;
    cout << t << endl;
    */
    
    return 0;
}
