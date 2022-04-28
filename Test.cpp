#include "doctest.h"
#include "Player.hpp"
#include "Assassin.hpp"
#include "Ambassador.hpp"
#include "Captain.hpp"
#include "Contessa.hpp"
#include "Duke.hpp"

using namespace coup;

Game g1{};
Duke duke{g1, "ron"};
Assassin assassin{g1, "orel"};
Ambassador ambassador{g1, "eli"};
Captain captain{g1, "yehonatan"};
Contessa contessa{g1, "tavor"};


TEST_CASE ("game 1") {
// round 1
    //all players take income
    CHECK_NOTHROW(duke.income());
    CHECK_NOTHROW(assassin.income());
    CHECK_NOTHROW(ambassador.income());
    CHECK_NOTHROW(captain.income());
    CHECK_NOTHROW(contessa.income());

// //     //round 2
// //     // players take income, double coins or tax
    CHECK_NOTHROW(duke.tax());
    CHECK_NOTHROW(assassin.foreign_aid());
    CHECK_NOTHROW(ambassador.income());
    CHECK_NOTHROW(captain.income());
    CHECK_NOTHROW(contessa.income());



// //     //round 3
// //     // players take tax or double coins, the assassin tries to kill captain, contessa block the assassin.
// //     // duke blocks captain2 from taking double coins
    CHECK_NOTHROW(duke.tax());
    CHECK_NOTHROW(assassin.coup(captain));
    CHECK_NOTHROW(ambassador.foreign_aid());
    CHECK_NOTHROW(captain.foreign_aid());
    CHECK_NOTHROW(contessa.block(assassin));
    CHECK_NOTHROW(contessa.foreign_aid());
    CHECK_NOTHROW(duke.block(captain));

      //round 4
      // players take double coins or tax, the ambassador transfers 1 coin from captain to contessa
    CHECK_NOTHROW(duke.tax());
    CHECK_NOTHROW(assassin.foreign_aid());
    CHECK_NOTHROW(ambassador.transfer(captain, contessa));
    CHECK_NOTHROW(captain.foreign_aid());
    CHECK_NOTHROW(contessa.foreign_aid());
    CHECK_NOTHROW(duke.block(assassin));


      //round 5
      // the duke has to coup he makes coup on assassin.
      // everyone else takes double coins
    CHECK_NOTHROW(duke.coup(assassin));
    CHECK_NOTHROW(assassin.foreign_aid());
    CHECK_NOTHROW(ambassador.income());
    CHECK_NOTHROW(captain.foreign_aid());
    CHECK_NOTHROW(contessa.foreign_aid());



      // round 6
      // captain1 tries to assasin the ambassador the contessa blocks.
      // the ambassador takes double coins
      // the contessa make coup on the duke.

    CHECK_NOTHROW(duke.tax());
    CHECK_NOTHROW(ambassador.foreign_aid());
    CHECK_NOTHROW(captain.coup(ambassador));
    CHECK_NOTHROW(contessa.block(captain));
    CHECK_NOTHROW(contessa.coup(duke));
    CHECK_THROWS(g1.winner());
    CHECK_THROWS(contessa.income());



       //round 7
       // the ambassador transfers 1 coin from captain to the contessa
       // captain tries to assign the ambassador(can't pay) so he steals 2 coins from him
       // contessa takes double coins and captain 2 assaying captain1
    CHECK_NOTHROW(ambassador.transfer(captain, contessa));
    CHECK_THROWS(captain.coup(ambassador));
    CHECK_NOTHROW(contessa.foreign_aid());

    CHECK_THROWS(g1.winner());
}

