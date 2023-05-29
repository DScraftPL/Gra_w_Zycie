#include <iostream>
#include "ustawienia.h" 
#include "Klasy/Organizm/Organizm.h"
#include "Klasy/GeneratorLosowy/GeneratorLosowy.h"
#include "Klasy/Sasiedztwo/Sasiedztwo.h"
#include "Klasy/ZamiarMieszkanca/ZamiarMieszkanca.h"
#include "Klasy/Mieszkaniec/Mieszkaniec.h"
#include "Klasy/Srodowisko/Srodowisko.h"
#include "Klasy/Osobniki/Osobniki.h"
#include "Klasy/Nisza/Nisza.h"

using namespace std;

string nazwaRodzaju(RodzajMieszkanca rodzaj);

int main(){
  for(Indeks2D & I : GEN::indeksyLosowe(2, 4)){
    cout << "{" <<I.wiersz << ", "<< I.kolumna << "}\n";
  }

  Srodowisko ekosystem(20,20);
  ekosystem.lokuj(new Glon(), 0, 1);
  ekosystem.lokuj(new Glon(), 1, 10);
  ekosystem.lokuj(new Glon(), 1, 7);
  ekosystem.lokuj(new Glon(), 3, 6);
  ekosystem.lokuj(new Grzyb(),1, 5);
  ekosystem.lokuj(new Grzyb(), 0, 0);
  ekosystem.lokuj(new Bakteria(), 3, 3);
  ekosystem.lokuj(new Bakteria(), 2, 6);
  unsigned long i = 0;
  do {
    system("clear");
    cout << "Krok symulacji: " << i << endl << endl << ekosystem << endl;
    cin.ignore(1);
    ekosystem++;
    i++;
  } while(i<200 && !ekosystem.martwy());
  cout << endl;
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

//klauzula protected udostepniamy do klas pochodnych itd.
//metoda virtual <- informujemy kompilator o tym, ze gdzies dalej w kodzie pojawi sie przesloniecie tej metody
//moemy tego uzyc np tworzac wskazniki klasy bazowej, by odwolac sie do tego pola
// ze gdzies dalej w kodzie pojawi sie przesloniecie tej metody
//moemy tego uzyc np tworzac wskazniki klasy bazowej, by odwolac sie do tego pola
//wskaznik moze wskazywac na obiekt, wskaznik jest typu rodzica obiektu, daje to uniwersalnosc
//mozemy w funkcjach zastapic zmienne ich adresami i to zadziala, 
//slowo kluczowe override <- oznacza to, ze ta funkcja jest przeslonieciem metody virutalnej
//jezeli funkcja bazowa ma byc pusta (czysto virtualna) mozna napisac np virtual float metoda=0;
//przyjete jest, ze destruktor jest virutalny, by poprawnie usuwac obiekty
//polimorfizm dynamiczny idzie w parze z deklaracjami dynamicznymi 
//kolos:
//bez teori
//praktyczne
//"napisz klasę która posiada pola, metody, itd"
//napisać zaimplementować i przetestować
//1-7 bez polimorfizmu dynamicznego
//dziedziczenie, przeciazanie operatorów i funkcji
//dokumentacja c++ cppreference.com
//możemy przeciążyć operator np dodawanie intów i dodawania float
// operator+(a,b) operator<znakoperatora
//wywołanie =, to funkcja operator=(c,a+b)
//operator jednoargumentowy ++
//operator wywołania () <- przeciążąć dowolną ilością argumentów
//void operator++(Student& s){
//  s.wiek++;
//}
//
//Student& operator+(Student& s, int new){
//  s.wiek+=nwl
//  return s;
//}
//zwracamy "nowy obiekt" przez referencje 
//można przeciążyć operator wewnątrz klasy
//void operator++(int){
//  this->wiek++;
//}
//void operator+(int nw){
//  this->wiek+=nw
//}
//
//malloc <- dziadostwo z C
//dynamiczna alokacja pamięci w C++
//int *wsk = new int; 
//int *wsk = new int(<wartość>);
//przy dynamicznej alokacji klasy, trzeba odwołać się do kontstruktora
//i
//delete wsk usunie wskaznik
//jezeli alokujemy tablice, trzeba usunac tablice (delete [] wsk)
//głównym zadaniem destruktora jest zwolnienie pamięci, jezeli jakaś była wewnątrz
//
