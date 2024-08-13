#include <iostream>

using namespace std;

const double pi{3.14159};

double calc_area_circle(double raduis){
    return pi*raduis*raduis;
}


double cal_volume_cylinder(double raduis, double height){
//    return pi*raduis*raduis*height;
    return calc_area_circle(raduis) * height;
} 

void area_circle(){
    double raduis{};
    cout << "\nEnter the raduis of the circle: ";
    cin >> raduis;
    cout << "The area of circle with raduis " << raduis << " is " << calc_area_circle(raduis) << endl;
}


void volume_cylinder(){
    double raduis{};
    double height{};
    cout << "\nEnter the raduis of the cylinder: ";
    cin >> raduis;
    cout << "\nEnter the height of the cylinder: ";
    cin >> height;
    
    cout << "The volume of a cylinder with raduis " << raduis << " and height " << height << " is " << cal_volume_cylinder(raduis, height) << endl;
    
}

int main() {

    area_circle();
    volume_cylinder();

    return 0;
}
