// Section 19 : Test forfileopen and simple read of 3 data items

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){
    
    ifstream in_file;
    string line;
    int num;
    double total;
    
    in_file.open("../Section19/Readfile_2/test.txt");
    if (!in_file){
        cerr << "Problem opening file" << endl;
        return 1;
    }
    
    //while(!in_file.eof()){
     while(in_file >> line >> num >> total){  
        
        cout << setw(10) << left << line
             << setw(10) << num
             << setw(10) << total
             << endl;
    
    }
    in_file.close();
    
    return 0;
}
