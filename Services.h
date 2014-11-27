#ifndef SERVICES_H
#define SERVICES_H
#include "Database.h"

class Services
{
    public:
        Services();
        ~Services();
        void display();
        void add(Man m1);
    private:
        Database d;
};

#endif // SERVICES_H
