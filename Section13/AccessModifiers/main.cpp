#include <iostream>
#include <string>

using namespace std;

class Player {
    
private:
    // Attributes
    string name{"Player"};
    int health;
    int xp;
    
 
public:
    // Method to make player talk
    void talk(string text_to_say) const {
        cout << name << " says " << text_to_say << endl;
    }
    
    // Method to check if player is dead
    bool is_dead();
};


int main(){
    
    Player frank;
    // frank.name = "Frank";
    // cout << frank.health << endl;
    
    frank.talk("Hello there");
    
    cout << endl;
    return 0;
}
