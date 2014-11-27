#include "Services.h"

Services::Services()
{
    //cout << "Service constructed." << endl;
    d = Database();
}

Services::~Services()
{
    //dtor
}
void Services::display()
{
    d.display();
}
void Services::add(Man m1)
{
    d.add(m1);
}
