#include <string>
#include "Ambassador.hpp"


using namespace std;
namespace coup{
    Ambassador::Ambassador(Game &game, string name):Player(game,name){}

    Ambassador::~Ambassador(){}

    void Ambassador::transfer(Player &give, Player &taker){}

    void Ambassador::block(Player &p1) {}

}