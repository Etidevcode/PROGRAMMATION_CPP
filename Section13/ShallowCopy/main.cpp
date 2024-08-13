// Section 13 : Copy constructor - Shallow Copy

#include <iostream>

using namespace std;

class Shallow {
    
private:
    int *data;

public:
    void set_data_values(int d){*data=d;}
    int get_data_values(){return *data;}
    // Constructor
    Shallow(int d);
    // Copy Constructor
    Shallow(const Shallow &source);
    // Destructor
    ~Shallow();
};

Shallow::Shallow(int d){
    data = new int;
    *data = d;
}

Shallow::Shallow(const Shallow &source)
    :data(source.data){
        cout << "Copy constructor - shallow copy" << endl;
}

Shallow::~Shallow(){
    delete data;
    cout << "Destructor freeing data" << endl;
}

void display_shallow(Shallow s){
    cout << s.get_data_values() << endl;
}

int main(){
    
    Shallow obj1 {100};
    display_shallow(obj1);
    
    Shallow obj2 {obj1};
    obj2.set_data_values(1000);
    
    
    return 0;
}
