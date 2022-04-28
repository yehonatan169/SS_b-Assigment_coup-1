
#include <string>
#include "Captain.hpp"
using namespace std;
namespace coup{
    Captain::Captain(Game &game, string name):Player(game,name){}

    Captain::~Captain(){}

    void Captain::steal(Player &player){}

    void Captain::block(Player &player){}

}