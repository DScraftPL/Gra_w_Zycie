#include "../../ustawienia.h"
#include "../Sasiedztwo/Sasiedztwo.h"
#include "../ZamiarMieszkanca/ZamiarMieszkanca.h"

#ifndef MIESZKANIEC
#define MIESZKANIEC

class Sasiedztwo;

class Mieszkaniec{
  protected:
    char symbol;

  public:
    Mieszkaniec(char _symbol = UstawieniaSymulacji::pobierzUstawienia().znakNieokreslony);

    Mieszkaniec(const Mieszkaniec& mieszkaniec);

    virtual char jakiSymbol() const final;

    virtual ~Mieszkaniec();

    virtual RodzajMieszkanca kimJestes() = 0;
    
    virtual ZamiarMieszkanca wybierzAkcje(Sasiedztwo sasiedztwo) = 0;

    virtual Mieszkaniec * dajPotomka() = 0;

    virtual void przyjmijZdobycz(Mieszkaniec * mieszkaniec) = 0;
};
#endif // !in
