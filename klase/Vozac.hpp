#ifndef VOZAC_HPP
#define VOZAC_HPP
#include <iostream>
#include <string>
using namespace std;
#include "Radnik.hpp"

class Vozac:public Radnik
{
private:
   string kategorija;
   int brojPrekrsaja;

public:
    Vozac();
    Vozac(string ime, string prezime, double visinaPlate, Radnik *nadredjeni, string kategorija, int brojPrekrsaja);
    string getKategorija();
    void setKategorija(string kategorija);
    int getBrojPrekrsaja();
    void setBrojPrekrsaja(int brojPrekrsaja);
    virtual string getTip();
    virtual void zapisi(ostream &output);
    virtual void procitaj(istream &input);
    virtual ~Vozac();
};

#endif