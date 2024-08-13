// Section 18 : Miles per Gallon - Function - Rethrow
#include <iostream>
#include <vector>

using namespace std;

int main() {    
    int miles {};
    int gallons {};
    double miles_per_gallon {};
    
    cout << "Enter the miles driven: ";
    cin >> miles;
    cout << "Enter the gallons used: ";
    cin >> gallons;
    
    try {
        if (gallons == 0)
            throw gallons;
        else if (miles < 0 || gallons < 0) 
            throw "You can have negative miles or gallons";
        else if (gallons > 1000)
            throw string {"Huh"};
    
       // miles_per_gallon = miles / gallons;
        miles_per_gallon = static_cast<double>(miles) / gallons;
        cout << "Result: " << miles_per_gallon << endl;
    }
    catch (int ex) {
        cout << "Sorry, you can't divide by zero" << endl;
    }
    catch (const char *ex) {    // what happens if you don't have this but throw string
        cout << ex << endl;
    }
    catch (...) {
        cerr << "Unknown error" << endl;
        throw;
    }
    cout << "Bye" << endl;
    return 0;
}
