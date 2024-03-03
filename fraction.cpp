#include "fraction.h"

Fraction::Fraction(int32_t num, int32_t denom){
    _num = num;
    SetDenom(denom);

}

void Fraction::SetDenom(int32_t newDenom){
        if(newDenom == 0)
            throw "Denomirate can't be zero";
        _denom = newDenom;
    }