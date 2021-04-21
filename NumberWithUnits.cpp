/**
 * CPP COURSE ASSIGHMENT 3 
 * Written By: Dor Yaakobi
 * https://github.com/Doryaakobi
*/

#include "NumberWithUnits.hpp"
#include <stdexcept>
#include <exception>
#include <fstream>
#include <sstream>

namespace ariel{

    map<string, map<string, double>> chart;


    void NumberWithUnits::read_units(ifstream& units_file){

    }

    // Overloading I/O operators
    ostream &operator<<(ostream &out, const NumberWithUnits &num){
        return out;
    }

    istream &operator>>(istream &input, NumberWithUnits &num){
        return input;
    }

    //------------------------------------------------------------------------

    //Basic arithmetic operators overloading (+,+=,-,-=)
    NumberWithUnits operator+(const NumberWithUnits &num1, const NumberWithUnits &num2){

        return;
    }

    NumberWithUnits operator+(const NumberWithUnits &num, double add){
        return NumberWithUnits(num.val + add, num.unit);
    }

    NumberWithUnits operator+=(NumberWithUnits &num1, const NumberWithUnits &num2){

        return;
    }

    NumberWithUnits operator+=(NumberWithUnits &num1, const double add){

        return;
    }

    NumberWithUnits operator-(const NumberWithUnits &num1, const NumberWithUnits &num2){

        return;
    }

    NumberWithUnits operator-(const NumberWithUnits &num1, const double num2){
        return;
    }

    NumberWithUnits operator-( const double num2 , const NumberWithUnits &num1){
        return;
    }

    NumberWithUnits operator-(const NumberWithUnits &num){
        return;
    }

    NumberWithUnits operator-=(NumberWithUnits &num1, const NumberWithUnits &num2){
        return;
    }
    NumberWithUnits operator-=(NumberWithUnits &num1, const double num2){

        return ;
    }

    //------------------------------------------------------------------------
    
    //Increment/decrement operators (postfix and prefix)

    NumberWithUnits operator--(NumberWithUnits &num, int){
        return; // postfix decrement
    }

    NumberWithUnits operator++(NumberWithUnits &num, int){
        return; // postfix increment
    }

    NumberWithUnits operator++(NumberWithUnits &num){
        return;
    }

    NumberWithUnits operator--(NumberWithUnits &num){
        return;
    }

    //------------------------------------------------------------------------

    //Multipication operators overloading (*,*=)
    NumberWithUnits operator*(NumberWithUnits &num, double mul){
        return;
    }
    
    NumberWithUnits operator*=(NumberWithUnits &num, double mul){
        return;
    }

    NumberWithUnits operator*(double mul, NumberWithUnits &num){
        return;
    }

    NumberWithUnits operator*=(double mul, NumberWithUnits &num){
        return;
    }
    //------------------------------------------------------------------------


    //Boolean comparisons operators
    bool operator>(const NumberWithUnits& num1, const NumberWithUnits& num2){
        return;
    }
    bool operator>=(const NumberWithUnits& num1, const NumberWithUnits& num2){
        return;
    }
    bool operator<(const NumberWithUnits& num1, const NumberWithUnits& num2){
        return;
    }
    bool operator<=(const NumberWithUnits& num1, const NumberWithUnits& num2){
        return;
    }
    bool operator==(const NumberWithUnits& num1, const NumberWithUnits& num2){
        return;
    }
    bool operator==(const NumberWithUnits &num, const double d){
        return;
    }

    bool operator!=(const NumberWithUnits& num1, const NumberWithUnits& num2){
        return;
    }

}
