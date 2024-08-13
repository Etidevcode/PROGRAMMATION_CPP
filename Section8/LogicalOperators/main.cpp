#include <iostream>

using namespace std;

int main(){
    
    int num{};
    const int lower{10};
    const int upper{20};
    
    cout << boolalpha;
    
    cout << "Enter an integer - the bounds are " << lower << " and " << upper << " : ";
    cin >> num;
    
    bool within_bounds{false};
    within_bounds = (num > lower && num < upper);
    cout << num << " is between " << lower << " and " << upper << " : " << within_bounds << endl;
    
    cout << num << "\nEnter an integer - the bounds " << lower << " and " << upper << " : ";
    cin >> num;
    
    
    bool ouside_bounds{false};
    ouside_bounds = (num < lower || num > upper);
    cout << num << " is outside " << lower << " and " << upper << " : " << ouside_bounds << endl;
    
    
    cout << "\nEnter an integer - the bounds are " << lower << " and " << upper << " : ";
    cin >> num;
    
    bool on_bounds{false};
    on_bounds = (num == lower || num == upper);
    cout << num << "is on one of the bounds which are " << lower << " and " << upper << " : " << on_bounds << endl;
    
    bool wear_coat{false};
    double temperature{};
    int wind_speed{};
    
    const int wind_speed_for_coast{25};
    const double temperature_for_coast{45};
    
    cout << "\nEnter the current temperature in (F) : ";
    cin >> temperature;
    cout << "Enter windspeed in (mph) : ";
    cin >> wind_speed;
    
    wear_coat = (temperature < temperature_for_coast || wind_speed > wind_speed_for_coast);
    cout << "Do you need to wear a coast using OR? " << wear_coat << endl;
    
    wear_coat = (temperature < temperature_for_coast && wind_speed > wind_speed_for_coast);
    cout << "Do you need to wear a coast using AND? " << wear_coat << endl;
    
    
    cout << endl;
    return 0;
}
