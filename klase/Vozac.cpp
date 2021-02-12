#include "Vozac.hpp"

Vozac::Vozac() : Radnik(){};
Vozac::Vozac(string ime, string prezime, double visinaPlate, Radnik *nadredjeni, string kategorija, int brojPrekrsaja) : Radnik(ime, prezime, visinaPlate, nadredjeni), kategorija(kategorija), brojPrekrsaja(brojPrekrsaja){};

string Vozac::getKategorija()
{
    return kategorija;
};
void Vozac::setKategorija(string kategorija)
{
    this->kategorija = kategorija;
};
int Vozac::getBrojPrekrsaja()
{
    return brojPrekrsaja;
};
void Vozac::setBrojPrekrsaja(int brojPrekrsaja)
{
    this->brojPrekrsaja = brojPrekrsaja;
};
string Vozac::getTip()
{
    return "vozac";
};
void Vozac::zapisi(ostream &output){};
void Vozac::procitaj(istream &input){};
Vozac::~Vozac(){};