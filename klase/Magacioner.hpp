#ifndef MAGACIONER_HPP
#define MAGACIONER_HPP
#include <iostream>
#include <string>
using namespace std;
#include "Radnik.hpp"

class Magacioner : public Radnik
{

public:
    Magacioner();
    Magacioner(string ime, string prezime, double visinaPlate, Radnik *nadredjeni);

    virtual string getTip();
    virtual void zapisi(ostream &output);
    virtual void procitaj(istream &input);
    virtual ~Magacioner();
};

#endif