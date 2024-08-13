// Section 19 
// Stream manipulators - Floating point manipulators
// Scientific, setprecision, fixed, showpoint, showpos, uppercase

#include <iostream>
#include <iomanip>


using namespace std;

int main(){
    double num1 {123456789.987654321};
    double num2 {1234.5678};
    double num3 {1234.0};
    
    // Using default settings
    cout << "-- Defauts -------------------------------" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    
    // Note how since can't display in precision 2 scientific notation is used
    cout << setprecision(2);
    cout << "-- Precision 2 -------------------------------" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    
    // Using precision 5
    cout << setprecision(5);
    cout << "-- Precision 5 -------------------------------" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    
    // Using precision 9
    cout << setprecision(9);
    cout << "-- Precision 9 -------------------------------" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    
    // Using precision 3 fixed
    cout << setprecision(3) << fixed;
    cout << "-- Precision 3 - fixed -------------------------------" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    
    // Using precision 3, fixed and scientific notation
    // Note precision is after the decimal
    cout << setprecision(3) << scientific;
    cout << "-- Precision 3 - scientifc -------------------------------" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    
     // Same but display capital 'E' in scientific
    cout << setprecision(3) << scientific << uppercase;
    cout << "-- Precision 3 - scientifc - uppercase ------------------------" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    
    // Show '+' symbol for positive numbers
    cout << setprecision(3) << fixed << showpos;
    cout << "-- Precision 3 - fixed - showpos ------------------------" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    
    // Back to defaults
    cout.unsetf(ios::scientific | ios::fixed);
    cout << resetiosflags(ios::showpos);
    
    // Show trailing zeroes up to precision 10
    cout << setprecision(10) << showpoint;
    cout << "-- Precision 10 - showpoint ------------------------" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    
    // Back to defaults
    cout.unsetf(ios::scientific | ios::fixed);
    cout << setprecision(6);
    cout << resetiosflags(ios::showpos);
    cout << resetiosflags(ios::showpoint);
    
    cout << "-- Back to defaults ------------------------" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    
    
    return 0;
}
