#include <iostream>
#include "ustawienia.h"
#include "Klasy/Organizm/Organizm.h"
#include "Klasy/GeneratorLosowy/GeneratorLosowy.h"

using namespace std;

int main(){
    for(int i=0; i<10; i++){
        cout << GEN::losujOdZeraDo(5) << " ";
    }
    cout << "\n";
    for(int i=0; i<10; i++){
        cout << GEN::losujOdZeraDo(10) << " ";
    }
    cout << "\n";
    for(int i=0; i<10; i++){
        cout << GEN::losujPomiedzy(-2L, 2L) << " ";
    }
    cout << "\n";   
    unsigned short mini = 20, maxi = 44;
    for(int i=0; i<10; i++){
        cout << GEN::losujPomiedzy(mini, maxi) << " ";
    }
    cout << "\n";
    return 0;
}