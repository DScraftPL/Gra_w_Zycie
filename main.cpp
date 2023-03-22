#include <iostream>
#include "Klasy/Organizm/Organizm.h"
#include "Klasy/GeneratorLosowy/GeneratorLosowy.h"

using namespace std;

void drukujOrganizm(const Organizm & o)
{
    cout << "\nlicznikZycia: " << o.stanLicznikaZycia() << "\nlicznikPosilkow: " << o.stanLicznikPosilkow();
    cout << "\nlimitPosilkow: " << o.limitPosilkow << "\nkosztPotomka: " << o.kosztPotomka;
    cout << "\ngłodny: " << o.glodny() << " paczkujacy: " << o.paczkujacy() << endl << endl;
}

int main(){

    Organizm organizm(8,3,2);

    cout << "Stan początkowy:\n";
    drukujOrganizm(organizm);
    for(int i=0; i<11; i++){
        organizm.krokSymulacji();

        if(organizm.paczkujacy()){
            organizm.potomek();
            cout << "---> potomek\n";
        }
        else{
            organizm.posilek();
        }
        
        cout << "Po kroku symulacji: " << i << endl;
        drukujOrganizm(organizm);
    }
    return 0;
}