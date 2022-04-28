#include <vector>
#include <iostream>
#include "Game.hpp"
#include <string>
#include "Player.hpp"
#pragma once
using namespace std;

namespace coup{
    class Captain : public Player{
    public:
        Captain(Game &game, string name);
        ~Captain();
        void steal(Player &p1);
        void block(Player &p1);
    };
}