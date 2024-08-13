// Section 16 : Using virtual functions

#include <iostream>
#include <vector>

using namespace std;

// This will use dynamic polymorphism for the with withdraw method
// We'll learn about virtual functions in the next video

class Account {
    friend ostream &operator << (ostream &os, const Account &acc);
public:
    virtual void withdraw(double amount) {
        std::cout << "In Account::withdraw" << std::endl;
    }
    virtual ~Account() {  std::cout << "Account::destructor" << std::endl; }
};

ostream &operator << (ostream &os, const Account &acc){
    os << "Account display";
    return os;
}

class Checking: public Account  {
    friend ostream &operator << (ostream &os, const Checking &acc);
public:
    virtual void withdraw(double amount) {
        std::cout << "In Checking::withdraw" << std::endl;
    }
    
    virtual ~Checking() { std::cout << "Checking::destructor" << std::endl;}
};

ostream &operator << (ostream &os, const Checking &acc){
    os << "Checking display";
    return os;
}

class Savings: public Account  {
    friend ostream &operator << (ostream &os, const Savings &acc);
public:
    virtual void withdraw(double amount) {
        std::cout << "In Savings::withdraw" << std::endl;
    }
    virtual ~Savings() { std::cout << "Savings::destructor" << std::endl; }
};


ostream &operator << (ostream &os, const Savings &acc){
    os << "Savings display";
    return os;
}

class Trust: public Account  {
    friend ostream &operator << (ostream &os, const Trust &acc);
public:
    virtual void withdraw(double amount) {
        std::cout << "In Trust::withdraw" << std::endl;
    }
    virtual ~Trust() { std::cout << "Trust::destructor" << std::endl; }
};

ostream &operator << (ostream &os, const Trust &acc){
    os << "Trust display";
    return os;
}

int main(){
    
    Account *p1 = new Account();
    cout << *p1 << endl;
    
    Account *p2 = new Checking();
    cout << *p2 << endl;
    
    Account a;
    cout << a << endl;
    
    Checking c;
    cout << c << endl;
    
    Savings s;
    cout << s << endl;
    
    Trust t;
    cout << t << endl;
    
    return 0;
}
