/**
 * CPP COURSE ASSIGHMENT 3 
 * Written By: Dor Yaakobi
 * https://github.com/Doryaakobi
*/

#include <map>
#include <string>
#include <iostream>

using namespace std;

namespace ariel
{

    class NumberWithUnits
    {
    private:
        double val;
        string unit;

    public:
        NumberWithUnits(double val, string unit)
        {
            this->val = val;
            this->unit = unit;
        }
        ~NumberWithUnits() {}

        static void read_units(ifstream& );

        // I/O operators overloading.
        friend ostream &operator<<(ostream &, const NumberWithUnits &);
        friend istream &operator>>(istream &, NumberWithUnits &);

        // Overloading basic arithmetics operators.
        friend NumberWithUnits operator+(const NumberWithUnits &, const NumberWithUnits &);
        friend NumberWithUnits operator+(const NumberWithUnits &, double );
        friend NumberWithUnits operator+=(NumberWithUnits &, const NumberWithUnits &);
        friend NumberWithUnits operator+=(NumberWithUnits &, const double );
        friend NumberWithUnits operator-(const NumberWithUnits &, const NumberWithUnits &);
        friend NumberWithUnits operator-(const NumberWithUnits &);
        friend NumberWithUnits operator-=(NumberWithUnits &, const NumberWithUnits &);
        friend NumberWithUnits operator-=(NumberWithUnits &, const double);
        friend NumberWithUnits operator-(const NumberWithUnits &, const double );
        friend NumberWithUnits operator-( const double  , const NumberWithUnits &);
        // Increment operators overloading.
        friend NumberWithUnits operator++(NumberWithUnits &);
        friend NumberWithUnits operator++(NumberWithUnits &, int);
        friend NumberWithUnits operator--(NumberWithUnits &);
        friend NumberWithUnits operator--(NumberWithUnits &, int);

        // Multiplication operators overloading.
        friend NumberWithUnits operator*(NumberWithUnits &, double );
        friend NumberWithUnits operator*(double , NumberWithUnits &);
        friend NumberWithUnits operator*=(NumberWithUnits &, double );
        friend NumberWithUnits operator*=(double , NumberWithUnits &);

        // Comparisons operators overloading.
        friend bool operator>(const NumberWithUnits &, const NumberWithUnits &);
        friend bool operator>=(const NumberWithUnits &, const NumberWithUnits &);
        friend bool operator<(const NumberWithUnits &, const NumberWithUnits &);
        friend bool operator<=(const NumberWithUnits &, const NumberWithUnits &);
        friend bool operator==(const NumberWithUnits &, const NumberWithUnits &);
        friend bool operator==(const NumberWithUnits &, const double);
        friend bool operator!=(const NumberWithUnits &, const NumberWithUnits &);
        friend int compare(const NumberWithUnits &, const NumberWithUnits &);
        
    };

}
