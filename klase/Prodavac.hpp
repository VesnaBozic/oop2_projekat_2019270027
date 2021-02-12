#ifndef PRODAVAC_HPP
#define PRODAVAC_HPP
#include <iostream>
#include <string>
using namespace std;
#include "Radnik.hpp"

class Prodavac:public Radnik
{
private:
   string kasa;

public:
    Prodavac();
    Prodavac(string ime, string prezime, double visinaPlate, Radnik *nadredjeni, string kasa);
    string getKasa();
    void setKasa(string kasa);
    virtual string getTip();
    virtual void zapisi(ostream &output);
    virtual void procitaj(istream &input);
    virtual ~Prodavac();
};

#endif