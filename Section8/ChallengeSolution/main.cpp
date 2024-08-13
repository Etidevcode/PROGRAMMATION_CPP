#include <iostream>

using namespace std;

int main(){
    
    // Define conversion values in cents
    const int dollar_value{100};
    const int quarter_value{25};
    const int dime_value{10};
    const int nickel_value{5};
    
    int change_amount{};
    
    // Solution - not using the modulo operator
    
    cout << "Enter an amount in cents : ";
    cin >> change_amount;
    
    int balance{}, dollars{}, quarters{}, dimes{}, nickels{}, pennies{};
    
    dollars = change_amount / dollar_value;
    balance = change_amount - (dollars * dollar_value);
    
    quarters = balance / quarter_value;
    balance -= quarters * quarter_value;
    
    dimes = balance / quarter_value;
    balance -= dimes * dime_value;
    
    nickels = balance /nickel_value;
    balance -= nickels * nickel_value;
    
    pennies = balance;
    
    cout << "----------------------------------" << endl;
    cout << "Solution using the modulo operator" << endl;
    cout << "----------------------------------" << endl;
    
    balance = dollars = quarters = dimes = nickels = pennies = 0;
    
    dollars = change_amount / dollar_value;
    balance = change_amount % dollar_value;
    
    quarters = balance / quarter_value;
    balance %= quarter_value;
    
    dimes = balance / dime_value;
    balance %= nickel_value;
    
    pennies = balance;
    
    cout << "\nYou can provide this change as follows : " << endl;
    cout << "dolloars : " << dollars << endl;
    cout << "quarters : " << quarters << endl;
    cout << "dimes : " << dimes << endl;
    cout << "nickels : " << nickels << endl;
    cout << "pennies : " << pennies << endl;
   

    cout << endl;
    return 0;
}
