#ifndef ZAMIAR_MIESZKANCA
#define ZAMIAR_MIESZKANCA

#include "../../ustawienia.h"
class ZamiarMieszkanca{
  public:
    const AkcjaMieszkanca akcja;
    const Polozenie gdzie;

    ZamiarMieszkanca(AkcjaMieszkanca _akcja = NIC, Polozenie _gdzie = NIGDZIE) : akcja(_akcja), gdzie(_gdzie){} 
};

#endif
