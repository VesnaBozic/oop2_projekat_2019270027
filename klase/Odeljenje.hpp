#ifndef ODELJENJE_HPP
#define ODELJENJE_HPP
#include <iostream>
#include <string>
using namespace std;
#include "Radnik.hpp"
#include <vector>

class Odeljenje
{
private:
    string naziv;
    Radnik *sefOdeljenja;
    vector<Radnik*> zaposleniRadnici;

    

public:
    Odeljenje();
    Odeljenje(string naziv, Radnik *sefOdeljenja);
    string getNaziv();
    void setNaziv(string naziv);
    Radnik *getSefOdeljenja();
    void setSefOdeljenja(Radnik *radnik);
    virtual string getTip();
    void zaposliRadnika(Radnik *radnik);
    void otpustiRadnika(int indeks);


    virtual void zapisi(ostream &output);
    virtual void procitaj(istream &input);
    virtual ~Odeljenje();
};

#endif