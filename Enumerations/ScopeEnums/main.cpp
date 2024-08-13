#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Used for test1

enum Direction {North, South, East, West};

// enum Street {Main, North, Elm};  // Error can't use North again


// Used for test 1
// This function expects a Direction parameter
// and returns its string representation

string direction_to_string(Direction direction){
    string result;
    switch(direction){
        case North:
            result = "North";
            break;
        case South:
            result = "South";
            break;
        case East:
            result = "East";
            break;
        case West:
            result = "West";
            break;
        default:
            result = "Unknown direction";
            
    }
    return result;
}

// Sample example that show the use of an unscoped enumeration
void test1(){
    cout << "\n-- Test1 ------------------------------\n" << endl;
    
    Direction direction{North};
    cout << "\nDirection " << direction << endl;
    cout << direction_to_string(direction) << endl;
    
    direction = West;
    cout << "\nDirection " << direction << endl;
    cout << direction_to_string(direction) << endl;
    
    // direction = 5;   // Compiler Error
    
    // Be careful casting since the compiler will assume
    // you known what you are doing!
    direction = Direction(100);
    cout << "\nDirection " << direction << endl;
    cout << direction_to_string(direction) << endl;
    
    direction = static_cast<Direction>(100);
    cout << "\nDirection " << direction << endl;
    cout << direction_to_string(direction) << endl;
}

// Used for test 2

int main(){
    
    test1();
    
    return 0;
}
