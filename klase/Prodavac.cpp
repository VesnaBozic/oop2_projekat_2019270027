#include "Prodavac.hpp"

Prodavac::Prodavac() : Radnik(){};
Prodavac::Prodavac(string ime, string prezime, double visinaPlate, Radnik *nadredjeni, string kasa) : Radnik(ime, prezime, visinaPlate, nadredjeni), kasa(kasa){};
string Prodavac::getKasa()
{
    return kasa;
};
void Prodavac::setKasa(string kasa)
{
    this->kasa = kasa;
};
string Prodavac::getTip()
{
    return "prodavac";
};
void Prodavac::zapisi(ostream &output){};
void Prodavac::procitaj(istream &input){};
Prodavac::~Prodavac(){};