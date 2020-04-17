#ifndef BATTLESHIP_H
#define BATTLESHIP_H

#include <iostream>

using namespace std;


class Battleship
{
    public:
        Battleship();
        ~Battleship();
        //virtual void fire(); implementation for virtual
        virtual void fire() = 0; //pure virtual
        int firePower;

    protected:

    private:
};

#endif // BATTLESHIP_H
