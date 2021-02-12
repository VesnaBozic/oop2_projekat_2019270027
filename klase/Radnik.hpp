#ifndef RADNIK_HPP
#define RADNIK_HPP
#include <iostream>
#include <string>
using namespace std;

class Radnik
{
private:
    string ime;
    string prezime;
    double visinaPlate;
    Radnik *nadredjeni;

public:
    Radnik();
    Radnik(string ime, string prezime, double visinaPlate, Radnik *nadredjeni);
    string getIme();
    void setIme(string ime);
    string getPrezime();
    void setPrezime(string prezime);
    Radnik *getNadredjeni();
    void setNadredjeni(Radnik *nadredjeni);

    double getVisinaPlate();
    void setVisinaPLate(double visinaPlate);
    virtual string getTip() = 0;
    virtual void zapisi(ostream &output);
    virtual void procitaj(istream &input);
    virtual ~Radnik();
};

#endif