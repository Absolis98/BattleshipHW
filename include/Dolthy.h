#ifndef DOLTHY_H
#define DOLTHY_H

#include <Battleship.h>


class Dolthy : public Battleship
{
    public:
        Dolthy(int fp);
        ~Dolthy();
        void fire();

    protected:

    private:
};

#endif // DOLTHY_H
