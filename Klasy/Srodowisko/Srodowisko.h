#ifndef SRODOWISKO
#define SRODOWISKO
#include "../Nisza/Nisza.h"
#include "../GeneratorLosowy/GeneratorLosowy.h"
#include "../../ustawienia.h"
#include <ostream>
#include <string>


class Nisza;
class Mieszkaniec;
class Sasiedztwo;

class Srodowisko{
private:
  Nisza ** nisza;
public:
  const unsigned int wiersze, kolumny;
  const unsigned long liczbaNisz;

  Srodowisko(unsigned int _wiersze, unsigned int _kolumny);
  ~Srodowisko();

  void lokuj(Mieszkaniec * mieszkaniec, unsigned int wiersz, unsigned int kolumna) const;
  Sasiedztwo ustalSasiedztwo(unsigned int wiersz, unsigned int kolumna) const;
  unsigned long liczba(RodzajMieszkanca rodzaj) const;
  bool martwy();
  void wykonajSkok(unsigned int wiersz, unsigned int kolumna);
  void wykonajAkcje(unsigned int wiersz, unsigned int kolumna);
  void wykonajKrokSymulacji();
  std::string doTekstu() const;

  void operator++(int){wykonajKrokSymulacji();}
  bool operator!(){return !martwy();}
};

std::ostream & operator<<(std::ostream & strumien, const Srodowisko & srodowisko);

#endif // !SRODOWISKO

