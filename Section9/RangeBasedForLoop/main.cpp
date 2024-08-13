#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(){
    
    // Exercice 1 
//    int scores[]{10, 20, 30};
    
//    for (int score : scores)
//        cout << score << endl;
        
//    for (auto score : scores)
//        cout << score << endl;

    // Exercice 2
//    vector<double> temperatures {87.9, 77.9, 80.0, 72.5};
//    double average_temp{};
//    double total{};
//    
//    for (auto temp : temperatures)
//        total += temp;
//        
//    if (temperatures.size() != 0)
//        average_temp = total/temperatures.size();
//    
//    cout << fixed << setprecision(1);
//    cout << "Average temperature is " << average_temp << endl;

    // Exercice 3
//    for (auto val: {1, 2, 3, 4, 5})
//        cout << val << endl;

    // Exercice 4
//    for (auto c: "This a test")
//        if (c != ' ')
//            cout << c;
            
    // Exercice 4
    for (auto c: "This is a test")
        if (c == ' ')
            cout << "\t";
        else
            cout << c;
            
    cout << endl;
    return 0;
}
