#include <iostream>

using namespace std;

int main(){
    
    int miles {};
    int gallons {};
    double miles_per_gallon {};
    
    cout << "Enter the miles: ";
    cin >> miles;
    cout << "Enter the gallons: ";
    cin >> gallons;
    
    // miles_per_gallon = miles / gallons;
    if (gallons != 0) {
        miles_per_gallon = static_cast<double>(miles) / gallons;
        cout << "Result: " << miles_per_gallon << endl;
    } else {
        cerr << "Sorry, can't divide by zero" << endl;
    }
    cout << "Bye" << endl;
    return 0;
}
