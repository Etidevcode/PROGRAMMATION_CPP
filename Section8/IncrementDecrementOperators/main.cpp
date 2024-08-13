#include <iostream>

using namespace std;

int main(){
    
    int counter{10};
    int result{0};
    
    // Example 1 - simple increment
    
    cout << "Counter : " << counter << endl;
    
    counter = counter + 1;
    cout << "Counter : " << counter << endl;
    
    counter++;
    cout << "Counter : " << counter << endl;
    
    ++counter;
    cout << "Counter : " << counter << endl;
    
    // Exemple 2 - preincrement
    counter = 10;
    result = 0;
    
    cout << "Counter : " << counter << endl;
    
    result = ++counter; 
    cout << "Counter : " << counter << endl;
    cout << "Result : " << result << endl;
    
     // Exemple 3 - postincrement
    counter = 10;
    result = 0;
    
    cout << "Counter : " << counter << endl;
    
    result = counter++; 
    cout << "Counter : " << counter << endl;
    cout << "Result : " << result << endl;
    
    // Exemple 4
    counter = 10;
    result = 0;
    
    cout << "Counter : " << counter << endl;
    
    result = ++counter + 10; 
    cout << "Counter : " << counter << endl;
    cout << "Result : " << result << endl;
    
    
     // Exemple 5
    counter = 10;
    result = 0;
    
    cout << "Counter : " << counter << endl;
    
    result = counter++ + 10; 
    cout << "Counter : " << counter << endl;
    cout << "Result : " << result << endl;
    
    cout << endl;
    return 0;
}
