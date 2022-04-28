#include <string>
#include <queue>
#include <vector>
#include <iostream>
#pragma once
using namespace std;
namespace coup {
    class Game{
    public:
        priority_queue<string>player;
        Game();
        ~Game();
        string turn(); //if player not empty cout << player.top << endl;
        vector<string> players(); // return vector of all name in player
        string winner(); // if player size is 1 return the name of the winner
        void add_player(string &p);

    };
}