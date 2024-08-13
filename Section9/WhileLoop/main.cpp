#include <iostream>

using namespace std;

int main(){
    
    // Exercice 1
    
//    int num{};
//    cout << "Enter a positive integer - start the countdown : ";
//    cin >> num;
//    
//    while (num > 0){
//        cout << num << endl;
//        --num;
//    }
//    cout << "Blastoff!" << endl;
    
    // Exercice 2
//    int num{};
//    cout << "Enter a positive integer to count up to : ";
//    cin >> num;
//    
//    int i{};
//    while (num >= i){
//        cout << i << endl;
//        i++;
//    }

//     Exercice 3
//    
//    int number{};
//    
//    cout << "Enter an integer less than 100: ";
//    cin >> number;
//    
//    while(number >= 100){ //!(number < 100)
//        cout << "Enter an integer less than 100: ";
//        cin >> number;
//    }
//    
//    cout << "Thanks" << endl;

    //     Exercice 4
    bool done{false};
    int number{0};
    
    while(!done){
        cout << "Enter an integer between 1 and 5 : ";
        cin >> number;
        if (number <= 1 || number >= 5)
            cout << "Out of a range, try again" << endl;
        else {
            cout << "Thanks!" << endl;
            done = true;
        }
    }
    
    cout << endl;
    return 0;
}
