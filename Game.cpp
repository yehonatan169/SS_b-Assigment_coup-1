#include "Game.hpp"

using namespace std;

namespace coup {
    Game::Game() {}

    Game::~Game() {}

    vector <string> Game::players() { // pass on the queue and move his cells to vector and return the vector
        vector <string> t={"1"};
        return t;
    }

    string Game::turn() {
        return "2";//this->player.top();
    }

    string Game::winner() {//       if (this->player.size() == 1) {
            return "3";//this->player.top();
//        }
//        } else {
//            throw exception("there is still more players")
//        }
    }
    void Game::add_player(string &p) {
        this->player.push(p);
    }
}