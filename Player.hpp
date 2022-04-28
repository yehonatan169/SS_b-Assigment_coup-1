//#ifndef GAME_H
//#define GAME_H
#pragma once
#include "Game.hpp"
#include <string>
#include <vector>
#include <iostream>
#pragma once
using namespace std;
namespace coup {
    class Player{
        int my_coins;
        string name;
        string roll;

    public:

        Game my_game;
        Player(Game &game,string name);
        ~Player();

        void income(); // coin++;
        void foreign_aid(); // coin + 2
        virtual void coup(Player &p1); // seek at mygame.players() the name p1 and delete him from the list, coin - 7

        int coins(); // return my_coins
        string role(); // return roll

    };
}
//#endif