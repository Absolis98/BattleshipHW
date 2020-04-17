#include "Jalthy.h"

Jalthy::Jalthy(int fp)
{
    firePower = fp;
}

Jalthy::~Jalthy()
{
    //dtor
}

void Jalthy::fire()
{
    cout << "BWABWABWABWABWA. Jalthy used proton gun." << endl;
    cout << "Opponent takes " << firePower << " damage." << endl;
    cout << "----------------------------------------" << endl;
}
