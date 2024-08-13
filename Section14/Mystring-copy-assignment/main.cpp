#include <iostream>
#include <vector>
#include "Mystring.h"


using namespace std;

int main(){
    
    Mystring a {"Hello"};       // overloaded constructor
    Mystring b;                 // no-args constructor
    b = a;                      // copy assignment
                                // b.operator = (a)
    b = "This a test";          // b.operator = ("This is a test");
    
    Mystring empty;             // no-args constructor
    Mystring larry("Larry");    // Overloaded constructor
    Mystring stooge {larry};    // copy constructor
    Mystring stooges;           // no-args constructor
    
    empty = stooge;             // copy assignment operator
    
    empty.display();
    larry.display();
    stooge.display();
    empty.display();
    
    stooges = "Larry, Moe, and Curly";
    stooges.display();
    
    
    vector<Mystring> stooges_vec;
    stooges_vec.push_back("Larry");
    stooges_vec.push_back("Moe");
    stooges_vec.push_back("Curly");

    
    cout << "============= Loop1 ================" << endl;
    for (const Mystring &s: stooges_vec)
        s.display();
    
    cout << "============= Loop2 ================" << endl;
    for (Mystring &s: stooges_vec)
        s = "Changed";
    
    cout << "============= Loop3 ================" << endl;
    for (const Mystring &s: stooges_vec)
        s.display();
        
    
    
    return 0;
}
