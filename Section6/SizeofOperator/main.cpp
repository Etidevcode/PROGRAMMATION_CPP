#include <iostream>
#include <climits>

using namespace std;

int main(){
    
    cout << "" << endl;
    cout << "sizeof information" << endl;
    cout << "====================================" << endl;
    cout << "" << endl;
    
    cout << "char : " << sizeof(char) << " bytes." << endl;
    cout << "int : " << sizeof(int) << " bytes." << endl;
    cout << "unsigned int : " << sizeof(unsigned int) << " bytes." << endl;
    cout << "short : " << sizeof(short) << " bytes." << endl;
    cout << "long : " << sizeof(long) << " bytes." << endl;
    cout << "long long : " << sizeof(long long) << " bytes." << endl;
    
    cout << "" << endl;
    cout << "====================================" << endl;
    cout << "" << endl;
    
    cout << "float : " << sizeof(float) << " bytes." << endl;
    cout << "double : " << sizeof(double) << " bytes." << endl;
    cout << "long double : " << sizeof(long double) << " bytes." << endl;
    
    // use values defined in <climits>
    
    cout << "" << endl;
    cout << "====================================" << endl;
    cout << "" << endl;
    
    cout << "Minimum values : " << endl;
    cout << "Char : " << CHAR_MIN << endl;
    cout << "Short : " << INT_MIN << endl;
    cout << "Long : " << LONG_MIN << endl;
    cout << "Long Long : " << LLONG_MIN << endl;
    
    cout << "" << endl;
    cout << "====================================" << endl;
    cout << "" << endl;
    
    cout << "sizeof using variable names" << endl;
    int age {21};
    cout << "age is " << sizeof(age) << "bytes." << endl;
    // or
    cout << "age is " << sizeof age << " bytes" << endl;
    
    double wage {22.34};
    cout << "wage is " << sizeof(wage) << " bytes" << endl;
    cout << "wage is " << sizeof wage << " bytes" << endl;
    
    return 0;
}
