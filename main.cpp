#include <iostream>
#include "ustawienia.h"
#include "Klasy/Organizm/Organizm.h"
#include "Klasy/GeneratorLosowy/GeneratorLosowy.h"

using namespace std;

void wyswietl(UstawieniaSymulacji & UST){
    cout << "Znak glon: " << UST.znakGlon << " zycie glon MIN: " << UST.glonZycieMin << " zycie glon MAX: " << UST.glonZycieMax << endl;
}

int main(){
    UstawieniaSymulacji& UST1 = UstawieniaSymulacji::pobierzUstawienia();   
    UstawieniaSymulacji& UST2 = UstawieniaSymulacji::pobierzUstawienia();
    UstawieniaSymulacji& UST3 = UstawieniaSymulacji::pobierzUstawienia();

    cout << "Pobranie danych:\n";
    cout << "UST1: "; wyswietl(UST1);
    cout << "UST2: "; wyswietl(UST2);
    cout << "UST3: "; wyswietl(UST3);
    return 0;
}