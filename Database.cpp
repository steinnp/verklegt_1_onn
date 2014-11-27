#include "Database.h"

Database::Database()
{
    //cout << "Database constructed." << endl;
    ifstream datafile;
    datafile.open("data.txt");
    string tfirst;
    string tlast;
    char tgen;
    int tbyear;
    int tdyear;
    while(true)
    {
        if(!(datafile >> tfirst)) break;
        if(!(datafile >> tlast)) break;
        if(!(datafile >> tgen)) break;
        if(!(datafile >> tbyear)) break;
        if(!(datafile >> tdyear)) break;
        Man temp(tfirst,tlast,tgen,tbyear,tdyear);
        data.push_back(temp);
    }
    datafile.close();
}

Database::~Database()
{
    ofstream datafile;
    datafile.open("data.txt");
    for(unsigned int i = 0; i < data.size(); i++)
    {
        datafile << data[i];
    }
    datafile.close();
}
vector<Man> Database::getData()
{
    return data;
}
void Database::setData(vector<Man> v)
{
    data = v;
}
void Database::display()
{
    for(unsigned int i = 0; i < data.size(); i++)
    {
        cout << data[i];
    }
}
void Database::add(Man m1)
{
    data.push_back(m1);
}
