#include "Radnik.hpp"

Radnik::Radnik(){};
Radnik::Radnik::Radnik(string ime, string prezime, double visinaPlate, Radnik *nadredjeni) : ime(ime), prezime(prezime), visinaPlate(visinaPlate), nadredjeni(nadredjeni){};
string Radnik::getIme()
{
    return ime;
};
void Radnik::setIme(string ime)
{
    this->ime = ime;
};
string Radnik::getPrezime()
{
    return prezime;
};
void Radnik::setPrezime(string prezime)
{
    this->prezime = prezime;
};
Radnik *Radnik::getNadredjeni()
{
    return nadredjeni;
};
void Radnik::setNadredjeni(Radnik *nadredjeni)
{
    this->nadredjeni = nadredjeni;
};

double Radnik::getVisinaPlate()
{
    return visinaPlate;
};
void Radnik::setVisinaPLate(double visinaPlate)
{
    this->visinaPlate = visinaPlate;
};

string Radnik::getTip()
{
    return "radnik";
};

void Radnik::zapisi(ostream &output){};
void Radnik::procitaj(istream &input){};

Radnik::~Radnik(){};