// Section 19 

#include <iostream>
#include <fstream>


using namespace std;

int main(){
    
    ifstream in_file;
 
    in_file.open("../Section19/Readfile_4/poem.txt");
    if (!in_file){
        cerr << "Problem opening file" << endl;
        return 1;
    }
    
    char c{};
    while (in_file.get(c)) {
        cout << c;
    }
    
    cout << endl;
    in_file.close();
    
    return 0;
}
