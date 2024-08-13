#include <iostream>
#include <string>


using namespace std;

class Player {
    
private:
    string name;
    int health;
    int xp;

public:

    string get_name() const {
    
        return name;
    }
    
    void set_name (string name_val){
        name = name_val;
    }
    
    // Overload Constructor
    Player();
    Player(string name_val);
    Player(string name_val, int health_val, int xp_val);
};

Player::Player()
    :Player {"None", 0, 0}{
}

Player::Player(string name_val)
    :Player{name_val, 0, 0} {
        
}

Player::Player(string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}{
        
}

void display_player_name(const Player &p){
    cout << p.get_name() << endl;
}

int main(){
    
    const Player villain {"Villain", 100, 55};
    Player hero {"Hero", 100, 15};
    
    // villain.set_name("Super villain");
    
    cout << villain.get_name() << endl;
    cout << hero.get_name() << endl;
    display_player_name(villain);
    display_player_name(hero);
    
    
    return 0;
}
