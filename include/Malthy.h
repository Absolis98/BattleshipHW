#ifndef MALTHY_H
#define MALTHY_H

#include <Battleship.h>


class Malthy : public Battleship
{
    public:
        Malthy(int fp);
        ~Malthy();
        void fire();

    protected:

    private:
};

#endif // MALTHY_H
