#include <iostream>
#include <vector>
#include "Mystring.h"


using namespace std;

int main(){
    
    Mystring a{"Hello"};       // overloaded constructor
    a = Mystring{"Hola"};       // Overloaded Constructor them move assignment
    a = "Bonjour";              // Overloaded Constructor them move assignment
 
    
    Mystring empty;             // no-args constructor
    Mystring larry("Larry");    // Overloaded constructor
    Mystring stooge {larry};    // copy constructor
    Mystring stooges;           // no-args constructor
    
    empty = stooge;             // copy assignment operator
                                // stooge is an l-value
    
    empty = "Funny";            // move assignment operator
                                // "Funny" is an r-value
    
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
