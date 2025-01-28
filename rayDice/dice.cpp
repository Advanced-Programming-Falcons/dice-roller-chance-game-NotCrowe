#include <cstdlib>
#include "dice.h"

Dice::Dice(){
    sides = 6;
}
Dice::Dice(int r){
    sides = r;
}

int Dice::roll(){
    return rand() % sides + 1;
}