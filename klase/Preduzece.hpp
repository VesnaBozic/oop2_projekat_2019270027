#ifndef PREDUZECE_HPP
#define PREDUZECE_HPP
#include <iostream>
#include <string>
using namespace std;
#include <vector>
#include "Odeljenje.hpp"

class Preduzece
{
private:
    string naziv;
    string maticniBroj;
    string pib;
    vector <Odeljenje*> odeljenja;

public:
    Preduzece();
    Preduzece(string naziv, string maticniBroj, string pib, vector<Odeljenje*>odeljenja);
    string getNaziv();
    void setNaziv(string naziv);
    string getMaticniBroj();
    void setMaticniBroj(string maticniBroj);
    string getPib();
    void setPib(string pib);
    
    
    void dodajOdeljenje(Odeljenje *odeljenje);
    void ukloniOdeljenje(int indeks);
    virtual string getTip();
    virtual void zapisi(ostream &output);
    virtual void procitaj(istream &input);
    virtual ~Preduzece();
};

#endif