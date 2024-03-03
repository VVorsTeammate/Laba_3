#include "fraction.h"

int main(){

    Fraction fract1 = Fraction(1, 2);
    std::cout << fract1;

    Fraction fract2 = Fraction(1, 3);
    std::cout << fract2;
    
    Fraction result = ++(~fract1 + fract2);
    std::cout << result;
}