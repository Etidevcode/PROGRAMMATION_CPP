/*
    Shipping cost calculator
    
    Ask yhe user for package dimension in inches
    length, width, height - these should be integers
    
    All dimension must be 10 inches or less or we cannot ship it.
    
    Be cost $2.50
    If package volume is greater than 100 cubic inches there is a 10% surcharge
    If package voulme is greater than  500 cubic inches there is a 25% surchage
    
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    int length{}, width{}, heigth{};
    double base_cost{2.50};
    
    const int tier1_threshold{100}; //volume
    const int tier2_threshold{500}; //volume
    
    int max_dimension_length{10}; //inches
    
    double tier1_surchage{0.10}; //10% extra
    double tier2_surchage{0.25}; //25% extra
    
    // All dimension must be 10 inches or less
    
    int package_volume{};
    
    cout << "Welcome to the package cost calculator" << endl;
    cout << "Enter length, width, and heigth of the package separated by spaces : ";
    cin >> length >> width >> heigth;
    
    if (length > max_dimension_length || width > max_dimension_length || heigth > max_dimension_length){
        cout << "Sorry, package rejected - dimension exceeded" << endl;
    } else {
        
        double package_cost{};
        package_volume = length * width * heigth;
        package_cost = base_cost;
        
        if(package_volume > tier2_threshold){
            package_cost += package_cost * tier2_surchage;
            cout << " adding tier 2 surcharge" << endl;
        } else if (package_volume > tier1_threshold) {
            package_cost += package_cost * tier1_surchage;
            cout << " adding tier 1 surcharge" << endl; 
        }
        
        cout << fixed << setprecision(2);
        cout << "The volume of your package is : " << package_volume << endl;
        cout << "Your package will cost $" << package_cost << " to ship " << endl;
        
    }
    
        
    
    cout << endl;
    return 0;
}
