#include <iostream>
#include "ustawienia.h"
#include "Klasy/Organizm/Organizm.h"
#include "Klasy/GeneratorLosowy/GeneratorLosowy.h"
#include "Klasy/Sasiedztwo/Sasiedztwo.h"

using namespace std;

string nazwaRodzaju(RodzajMieszkanca rodzaj);

int main(){ 

    Sasiedztwo sasiedztwo;

    sasiedztwo.okreslSasiada(P,GLON);
    sasiedztwo.okreslSasiada(PG,GRZYB);
    sasiedztwo.okreslSasiada(G,GRZYB);
    sasiedztwo.okreslSasiada(LG,GLON);
    sasiedztwo.okreslSasiada(L,BAKTERIA);
    sasiedztwo.okreslSasiada(LD,BAKTERIA);
    sasiedztwo.okreslSasiada(D,GLON);
    sasiedztwo.okreslSasiada(PD,PUSTKA);

    cout << "Przegląd sąsiedztwa:\n";

    for(int i=0; i<8; i++){

        Polozenie p = static_cast<Polozenie>(i);
        RodzajMieszkanca r = sasiedztwo.ktoJestSasiadem(p);

        cout << "polozenie = " << p << " rodzaj = " << nazwaRodzaju(r) << "\n";
    }

    cout << "glony: " << sasiedztwo.ile(GLON) << endl;
    for(int i=0; i<8; i++){

        Polozenie p = static_cast<Polozenie>(i);
        long wiersz = 5, kolumna = 7;

        Sasiedztwo::zmienIndeksyWgPolozenia(p,wiersz,kolumna);

        cout << "polozenie: " << p << " ->[" << wiersz << "][" << kolumna << "]\n"; 
    }
    return 0;
}

string nazwaRodzaju(RodzajMieszkanca rodzaj)
{
    switch(rodzaj){
        case GLON: return "GLON";
        case GRZYB: return "GRZYB";
        case BAKTERIA: return "BAKTERIA";
        case PUSTKA: return "PUSTKA";
        case SCIANA: return "SCIANA";
        case TRUP: return "TRUP";
        case NIEZNANE: return "NIEZNANE";
        default: break;
    };
}

