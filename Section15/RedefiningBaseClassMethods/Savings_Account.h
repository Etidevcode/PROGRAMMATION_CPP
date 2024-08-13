#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H
#include "Account.h"

// Savings Account Class
// Deposit method increments amount to be deposied by amount * int_rate percentage!!!
// So a 1000 deposit at 5% interest rate will deposit 1000 + 50 = 1050 

// Withdraw method does not speciliaze
class Savings_Account:public Account
{
     friend std::ostream &operator<<(std::ostream &os, const Savings_Account &account);
    
protected:
    double int_rate;
public:
    Savings_Account();
    Savings_Account(double balance, double int_rate);
    void deposit(double amount);
    //void withdraw(double amount);
};

#endif // SAVINGS_ACCOUNT_H
