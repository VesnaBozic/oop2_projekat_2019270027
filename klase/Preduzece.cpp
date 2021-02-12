#include "Preduzece.hpp"

Preduzece::Preduzece(){};
Preduzece::Preduzece(string naziv, string maticniBroj, string pib, vector<Odeljenje *> odeljenja) : naziv(naziv), maticniBroj(maticniBroj), pib(pib), odeljenja(odeljenja){};
string Preduzece::getNaziv()
{
    return naziv;
};
void Preduzece::setNaziv(string naziv)
{
    this->naziv = naziv;
};
string Preduzece::getMaticniBroj()
{
    return maticniBroj;
};
void Preduzece::setMaticniBroj(string maticniBroj)
{
    this->maticniBroj = maticniBroj;
};
string Preduzece::getPib()
{
    return pib;
};
void Preduzece::setPib(string pib)
{
    this->pib = pib;
};

void Preduzece::dodajOdeljenje(Odeljenje *odeljenje)
{
    odeljenja.push_back(odeljenje);
};
void Preduzece::ukloniOdeljenje(int indeks)
{
    bool nePostoji = false;
    for (int i = 0; i < odeljenja.size(); i++)
    {
        if (i == indeks - 1)
        {
            odeljenja.erase(odeljenja.begin() + indeks - 1);

            nePostoji = true;
        }
    }

    if (!nePostoji)
    {
        cout << "Ne postoji radnik na zadatom indeksu!" << endl;
    }
};
string Preduzece::getTip()
{
    return "preduzece";
};
void Preduzece::zapisi(ostream &output){};
void Preduzece::procitaj(istream &input){};
Preduzece::~Preduzece(){};