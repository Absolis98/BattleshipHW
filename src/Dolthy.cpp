#include "Dolthy.h"

Dolthy::Dolthy(int fp)
{
    firePower = fp;
}

Dolthy::~Dolthy()
{
    //dtor
}

void Dolthy::fire()
{
    cout << "ZZZAAP. Dolthy used laser gun." << endl;
    cout << "Opponent takes " << firePower << " damage." << endl;
    cout << "----------------------------------------" << endl;
}
