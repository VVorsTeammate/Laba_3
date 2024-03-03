#include<iostream>
#include<math.h>

class Fraction{
private:
    int32_t _num = 1;
    int32_t _denom = 2;

public:

    void SetDenom(int32_t newDenom);

    Fraction(int32_t num, int32_t denom);

    friend std::ostream& operator<<(std::ostream& os, const Fraction& tmp){
        os << tmp._num << "/" << tmp._denom << std::endl;
        return os;
    }

    Fraction operator+(const Fraction& fraction) const { //1
        int32_t new_num = _num * fraction._denom + fraction._num * _denom;
        int32_t new_denom = _denom * fraction._denom;
        Fraction res = Fraction(new_num, new_denom);
        return res;
    }

    Fraction operator/(const Fraction& fraction) const { //2
        int32_t new_num = _num * fraction._denom;
        int32_t new_denom = _denom * fraction._num;
        Fraction res = Fraction(new_num, new_denom);
        return res;
    }

    Fraction operator*(const Fraction& fraction) const { //3
        int32_t new_num = _num * fraction._num;
        int32_t new_denom = _denom * fraction._denom;
        Fraction res = Fraction(new_num, new_denom);
        return res;
    }

    Fraction operator-(const Fraction& fraction) const { //4
        int32_t new_num = _num * fraction._denom - fraction._num * _denom;
        int32_t new_denom = _denom * fraction._denom;
        Fraction res = Fraction(new_num, new_denom);
        return res;
    }

    Fraction operator^(double a) const { //5
        int32_t new_num = pow(_num, a);
        int32_t new_denom = pow(_denom, a);
        Fraction res = Fraction(new_num, new_denom);
        return res;
    }

    Fraction& operator=(const Fraction& fraction){ //6
        _num = fraction._num;
        _denom = fraction._denom;
        return *this;
    }

    bool operator<=(const Fraction& fraction) const { //7
        int32_t new_num = _num * fraction._denom - fraction._num * _denom;
        if(new_num <= 0) return true;
        else return false;
    }

    bool operator>=(const Fraction& fraction) const { //8
        int32_t new_num = _num * fraction._denom - fraction._num * _denom;
        if(new_num >= 0) return true;
        else return false;
    }

    bool operator<(const Fraction& fraction) const { //9
        int32_t new_num = _num * fraction._denom - fraction._num * _denom;
        if(new_num < 0) return true;
        else return false;
    }

    bool operator>(const Fraction& fraction) const { //10
        int32_t new_num = _num * fraction._denom - fraction._num * _denom;
        if(new_num > 0) return true;
        else return false;
    }

    bool operator==(const Fraction& fraction) const { //11
        int32_t new_num = _num * fraction._denom - fraction._num * _denom;
        if(new_num == 0) return true;
        else return false;
    }

    Fraction& operator++() { //12 префиксный
        _num += _denom;
        return *this;
    }

    Fraction& operator--() { //13 префиксный
        _num -= _denom;
        return *this;
    }

    Fraction operator++(int32_t xlam) { //14 постфиксный
        Fraction copy {*this};
        ++(*this);
        return copy;
    }

    Fraction operator--(int32_t xlam) { //15 постфиксный
        Fraction copy {*this};
        --(*this);
        return copy;
    }

    Fraction& operator~() { //16
        _num *= -1;
        return *this;
    }


    ~Fraction(){
        std::cout << "Destructor -> " << this << std::endl;
    }
};