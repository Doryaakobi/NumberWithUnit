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

        return NumberWithUnits{1,"km"};
    }

    NumberWithUnits operator+(const NumberWithUnits &num, double add){
        return NumberWithUnits{1,"km"};
    }

    NumberWithUnits operator+=(NumberWithUnits &num1, const NumberWithUnits &num2){
        return NumberWithUnits{1,"km"};
    }

    NumberWithUnits operator+=(NumberWithUnits &num1, const double add){
        return NumberWithUnits{1,"km"};
    }

    NumberWithUnits operator-(const NumberWithUnits &num1, const NumberWithUnits &num2){
        return NumberWithUnits{1,"km"};
    }

    NumberWithUnits operator-(const NumberWithUnits &num1, const double num2){
        return NumberWithUnits{1,"km"};

    }

    NumberWithUnits operator-( const double num2 , const NumberWithUnits &num1){
        return NumberWithUnits{1,"km"};
    }

    NumberWithUnits operator-(const NumberWithUnits &num){
        return NumberWithUnits{1,"km"};
    }

    NumberWithUnits operator-=(NumberWithUnits &num1, const NumberWithUnits &num2){
        return NumberWithUnits{1,"km"};
    }
    NumberWithUnits operator-=(NumberWithUnits &num1, const double num2){

        return NumberWithUnits{1,"km"};
    }

    //------------------------------------------------------------------------
    
    //Increment/decrement operators (postfix and prefix)

    NumberWithUnits operator--(NumberWithUnits &num, int){
        return NumberWithUnits{1,"km"}; // postfix decrement
    }

    NumberWithUnits operator++(NumberWithUnits &num, int){
        return NumberWithUnits{1,"km"}; // postfix increment
    }

    NumberWithUnits operator++(NumberWithUnits &num){
        return NumberWithUnits{1,"km"};
    }

    NumberWithUnits operator--(NumberWithUnits &num){
        return NumberWithUnits{1,"km"};
    }

    //------------------------------------------------------------------------

    //Multipication operators overloading (*,*=)
    NumberWithUnits operator*(NumberWithUnits &num, double mul){
        return NumberWithUnits{1,"km"};
    }
    
    NumberWithUnits operator*=(NumberWithUnits &num, double mul){
        return NumberWithUnits{1,"km"};
    }

    NumberWithUnits operator*(double mul, NumberWithUnits &num){
        return NumberWithUnits{1,"km"};
    }

    NumberWithUnits operator*=(double mul, NumberWithUnits &num){
        return NumberWithUnits{1,"km"};
    }
    //------------------------------------------------------------------------


    //Boolean comparisons operators
    bool operator>(const NumberWithUnits& num1, const NumberWithUnits& num2){
        return 1;
    }
    bool operator>=(const NumberWithUnits& num1, const NumberWithUnits& num2){
        return 1;
    }
    bool operator<(const NumberWithUnits& num1, const NumberWithUnits& num2){
        return 1;
    }
    bool operator<=(const NumberWithUnits& num1, const NumberWithUnits& num2){
        return 1;
    }
    bool operator==(const NumberWithUnits& num1, const NumberWithUnits& num2){
        return 1;
    }
    bool operator==(const NumberWithUnits &num, const double d){
        return 1;
    }

    bool operator!=(const NumberWithUnits& num1, const NumberWithUnits& num2){
        return 1;
    }

}
