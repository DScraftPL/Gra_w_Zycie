#include <iostream>
#include "Organizm.h"

using namespace std;

Organizm::Organizm(unsigned short dlugoscZycia, unsigned limitPosilkow, unsigned short kosztPotomka):
    limitPosilkow(limitPosilkow), kosztPotomka(kosztPotomka), licznikZycia(dlugoscZycia), licznikPosilkow(0)
{

};

bool Organizm::potomek()
{
    if(glodny()){
        licznikPosilkow++;
        return true;
    }
    else {
        return false;
    }
}

bool Organizm::posilek()
{
    if(paczkujacy()){
        licznikPosilkow -= kosztPotomka;
        return true;
    }
    else
    {
        return false;
    }
}

void Organizm::krokSymulacji()
{
    if(zywy()) licznikZycia--;
}