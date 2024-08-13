// Section 19
// Challenge 4 - Solution
// Copy Romeo and Juliet with line numbers
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    ifstream in_file {"../Section19/Challenge_4_Solution/romeoandjuliet.txt"};
    ofstream out_file {"../Section19/Challenge_4_Solution/romeoandjuliet_out.txt"};
    if (!in_file.is_open()) {
        cerr << "Error opening input file" << endl;
        return 1;
    }
    if (!out_file.is_open()) { // Corrected condition for checking if out_file is open
        cerr << "Error opening output file" << endl;
        return 1;
    }
    
    string line{};
    int line_number {0};
    while (getline(in_file, line)) {
        if (line == " ")
            out_file << endl;
        else {
            ++line_number;
            out_file << setw(7) << left << line_number
                 << line << endl;
        }
    }
    cout << "\nCopy complete" << endl;
    
    // No need to explicitly close files, they will be closed automatically when out of scope
    
    return 0;
}
