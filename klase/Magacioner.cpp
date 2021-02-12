#include "Magacioner.hpp"

Magacioner::Magacioner() : Radnik(){};
Magacioner::Magacioner(string ime, string prezime, double visinaPlate, Radnik *nadredjeni) : Radnik(ime, prezime, visinaPlate, nadredjeni){};

string Magacioner::getTip()
{
    return "magacioner";
};

void Magacioner::zapisi(ostream &output){};
void Magacioner::procitaj(istream &input){};
Magacioner::~Magacioner(){};