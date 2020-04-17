#include "Malthy.h"

Malthy::Malthy(int fp)
{
    firePower = fp;
}

Malthy::~Malthy()
{
    //dtor
}

void Malthy::fire()
{
    cout << "BWAZAPBWABWA. Malthy used laser gun and proton gun." << endl;
    cout << "Opponent takes " << firePower << " damage." << endl;
    cout << "----------------------------------------" << endl;
}
