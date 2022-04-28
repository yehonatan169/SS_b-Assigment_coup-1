#include "Player.hpp"
#include "Game.hpp"
#include <string>

using namespace std;

namespace coup{
    Player::Player(Game &game, string name) {}

    Player::~Player() {}

    int Player::coins() {
        return 4;//this->my_coins;
    }

    void Player::coup(Player &p1) { // search in the queue if found p1 pop him out

    }

    void Player::income() {
        this->my_coins+=1;
    }

    void Player::foreign_aid() {
        this->my_coins+=2;
    }

    string Player::role() {
        return "5";//this->roll;
    }
}