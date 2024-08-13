// Section 21 : Function Objects

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

struct Square_Function {
    void operator() (int x){
        cout << x * x << " ";
    }
};

template <typename T>
struct Displayer {
    void operator() (const T &data){
        cout << data << " ";
    }
};

class Multiplier {
    
private:
    int num{};
public:
    Multiplier(int n): num{n}{}
    int operator()(int n) const{
        return n * num;
    }
    
};

int main(){
    cout << "\nTest1 ===================================" << endl;
    
    Square_Function square;
    square(4);  // square.operator()(4) displays 16
    
    Displayer<int> d1;
    Displayer<string> d2;
    d1(100);        // displays 100
    d2("Frank");    // displays Frank
    
    cout << "\nTest2 ===================================" << endl;
    vector<int> vec1{1,2,3,4,5};
    vector<string> vec2{"Larry", "Moe", "Curly"};
    
    for_each(vec1.begin(), vec1.end(), square);   // 1 2 3 4 5
    cout << endl;
    
    for_each(vec1.begin(), vec1.end(), Displayer<int>());   // 1 2 3 4 5
    cout << endl;
    
    for_each(vec1.begin(), vec1.end(), d1);   // 1 2 3 4 5
    cout << endl;
    
    for_each(vec2.begin(), vec2.end(), Displayer<string>());   // 1 2 3 4 5
    cout << endl;
    
    for_each(vec2.begin(), vec2.end(), d2);   // Larry Moe Curly
    cout << endl;
    
    cout << "\nTest3 ===================================" << endl;
    for_each(vec1.begin(), vec1.end(), [](int x){cout << x * x << " ";}); 
    cout << endl;
    
    for_each(vec1.begin(), vec1.end(), [](int x){cout << x * 10 << " ";}); 
    cout << endl;
    
    for_each(vec1.begin(), vec1.end(), [](int x){cout << x << " ";}); 
    cout << endl;
    
    for_each(vec2.begin(), vec2.end(), [](string s){cout << s << " ";}); 
    cout << endl;
    
    cout << "\nTest4 ===================================" << endl;
    Multiplier mult(100);
    vec1 = {1,2,3,4};
    
    // Transform changes the vector
    transform(vec1.begin(), vec1.end(), vec1.begin(), mult); 
    for_each(vec1.begin(), vec1.end(), d1);
    cout << endl;
    
    vec1 = {1,2,3,4};
    transform(vec1.begin(), vec1.end(), vec1.begin(), [](int x){return x * 100;}); 
    for_each(vec1.begin(), vec1.end(), [](int x){cout << x << " ";}); 
    cout << endl;
    
    return 0;
}
