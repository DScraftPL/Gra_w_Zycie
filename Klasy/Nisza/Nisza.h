#ifndef NISZA
#define NISZA
#include "../Sasiedztwo/Sasiedztwo.h"
#include "../Mieszkaniec/Mieszkaniec.h"
#include "../Srodowisko/Srodowisko.h"

class Nisza
{
private:
    Mieszkaniec * lokator;
public:
    Nisza();
    Nisza(Nisza & innaNisza);
    ~Nisza();

    Nisza& operator=(Nisza & innaNisza);

    void przyjmijLokatora(Mieszkaniec * lokatorBezdomny);

    Mieszkaniec * oddajLokatora();

    bool zajeta() const {
      return lokator != nullptr;
    }
    RodzajMieszkanca ktoTuMieszka() {
      return zajeta() ? lokator->kimJestes(): PUSTKA;
    }

    bool lokatorZywy() const;

    char jakiSymbol() const;
    ZamiarMieszkanca aktywujLokatora(Sasiedztwo sasiedztwo){
      return lokator->wybierzAkcje(sasiedztwo);
    }

    Mieszkaniec * wypuscPotomka(){
      return lokator->dajPotomka();
    }

    void przyjmijZdobycz(Mieszkaniec * ofiara){
      lokator->przyjmijZdobycz(ofiara);
    }
};


#endif // NISZA
