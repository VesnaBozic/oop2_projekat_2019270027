#include "Odeljenje.hpp"

Odeljenje::Odeljenje(){};
Odeljenje::Odeljenje(string naziv, Radnik *sefOdeljenja) : naziv(naziv), sefOdeljenja(sefOdeljenja){};
string Odeljenje::getNaziv()
{
    return naziv;
};
void Odeljenje::setNaziv(string naziv)
{
    this->naziv = naziv;
};
Radnik *Odeljenje::getSefOdeljenja()
{
    return sefOdeljenja;
};
void Odeljenje::setSefOdeljenja(Radnik *radnik)
{
    this->sefOdeljenja = sefOdeljenja;
};
string Odeljenje::getTip()
{
    return "odeljenje";
};
void Odeljenje::zaposliRadnika(Radnik *radnik)
{
    zaposleniRadnici.push_back(radnik);
};

void Odeljenje::otpustiRadnika(int indeks)
{
    bool nePostoji = false;
    for (int i = 0; i < zaposleniRadnici.size(); i++)
    {
        if (i == indeks - 1)
        {
            zaposleniRadnici.erase(zaposleniRadnici.begin() + indeks - 1);

            nePostoji = true;
        }
    }

    if (!nePostoji)
    {
        cout << "Ne postoji radnik na zadatom indeksu!" << endl;
    }
};

void Odeljenje::zapisi(ostream &output){};
void Odeljenje::procitaj(istream &input){};

Odeljenje::~Odeljenje(){};