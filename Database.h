#ifndef DATABASE_H
#define DATABASE_H

#include <vector>
#include <iostream>
#include <fstream>

#include "Man.h"

class Database
{
    public:
        Database();
        ~Database();
        void display();
        void add(Man m1);
        vector<Man> getData();
        void setData(vector<Man> v);
    private:
        vector<Man> data;
};

#endif // DATABASE_H
