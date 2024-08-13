#include <iostream>
#include <string>

using namespace std;

class Player {
public:
    // Attributes
    string name;
    int health;
    int xp;
    
    // Constructor
    Player(string name_val = "None", int health_val = 0, int xp_val = 0)
        : name{name_val}, health{health_val}, xp{xp_val} {}
    
    // Method to display player information
    void display() const {
        cout << "Name: " << name << endl;
        cout << "Health: " << health << endl;
        cout << "XP: " << xp << endl;
    }
    
    // Method to make player talk
    void talk(const string& text_to_say) const {
        cout << name << " says " << text_to_say << endl;
    }
    
    // Method to check if player is dead
    bool is_dead() const {
        return health <= 0;
    }
};

class Account {
public:
    // attributes
    string name;
    double balance;
    
    // Constructor
    Account(string name_val = "None", double balance_val = 0.0)
        : name{name_val}, balance{balance_val} {}
    
    // Method to deposit amount
    bool deposit(double bal) {
        balance += bal;
        cout << "Deposited " << bal << " into " << name << "'s account" << endl;
        return true;
    }
    
    // Method to withdraw amount
    bool withdraw(double bal) {
        if (balance >= bal) {
            balance -= bal;
            cout << "Withdrew " << bal << " from " << name << "'s account" << endl;
            return true;
        } else {
            cout << "Insufficient funds in " << name << "'s account" << endl;
            return false;
        }
    }
};

int main() {
    Account frank_account("Frank's account", 5000.0);
    frank_account.deposit(1000.0);
    frank_account.withdraw(500.0);
    
    Player frank("Frank", 100, 12);
    frank.talk("Hi there");
    frank.display();
    
    Player *enemy = new Player("Enemy", 100, 15);
    enemy->talk("I will destroy you");
    enemy->display();
    
    delete enemy;
    
    return 0;
}
