#include <iostream>
#include <Battleship.h>
#include <Dolthy.h>
#include <Jalthy.h>
#include <Malthy.h>

using namespace std;

int main()
{
    Battleship * ships[7];
    ships[0] = new Dolthy(23);
    ships[1] = new Jalthy(10);
    ships[2] = new Malthy(33);
    ships[3] = new Dolthy(23);
    ships[4] = new Jalthy(10);
    ships[5] = new Malthy(33);
    ships[6] = new Dolthy(23);

    for(int i = 0; i < 7; i++)
    {
        ships[i]->fire();
    }

    return 0;
}
