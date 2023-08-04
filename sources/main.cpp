#include <iostream>
#include "game.h"

using namespace race;

int main()
{
    Game g;
    while(g.play() != GameStatus::EXIT)
    {
        system("clear");
    }
    return 0;
}
