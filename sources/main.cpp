#include <iostream>
#include "game.h"

using namespace race;

int main()
{
#ifdef _WIN32
    system("chcp 65001");
#endif
    Game g;
    while(g.play() != GameStatus::EXIT)
    {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
    }
    return 0;
}
