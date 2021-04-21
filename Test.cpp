/**
 * CPP COURSE ASSIGHMENT 3 
 * Written By: Dor Yaakobi
 * https://github.com/Doryaakobi
*/

#include "doctest.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>
#include <stdexcept>
#include <exception>
#include <string>
#include "NumberWithUnits.hpp"


using namespace ariel;
using namespace std;

enum lenght{cm,m,km};
enum weight{g,kg,ton};
enum time{sec,min,h};


ifstream units_file{"units.txt"};
NumberWithUnits a{2, "km"};
NumberWithUnits b{500, "m"};
NumberWithUnits c{1,"cm"};
NumberWithUnits d{500, "USD"};
NumberWithUnits e{500, "sec"};

TEST_CASE("Simple Testing of basic + and - operators"){

NumberWithUnits::read_units(units_file);


CHECK_EQ(a+b,NumberWithUnits{2.5,"km"});
CHECK_EQ(b+a,NumberWithUnits{2500,"m"});
CHECK_EQ(b+c,NumberWithUnits{500.01,"m"});
CHECK_EQ(c+b,NumberWithUnits{50001,"cm"});

}


TEST_CASE("Simple Testing of Adding/Subtracting invalid Different measurments"){

NumberWithUnits::read_units(units_file);

CHECK_THROWS(a+d);
CHECK_THROWS(a-e);
CHECK_THROWS(b+d);


}

TEST_CASE("Test for (-,-=) both valid and invalid"){

NumberWithUnits::read_units(units_file);


    c = a - b;
    CHECK_EQ(c , NumberWithUnits{1.5, "km"});
    double result = 1.5; 
    for(int i = 0; i < 10; i++){
        double r = (rand()+1) * 100;
        result = result - r;
        CHECK_EQ((c = c-r) , NumberWithUnits{result, "km"});
        result -= r;
        CHECK_EQ((c = c-r) , NumberWithUnits{result, "km"});
        result -= r;
        CHECK_EQ((c -= r) , NumberWithUnits{result, "km"});
    }
      CHECK_THROWS( d-a );
      CHECK_THROWS( a-=d );

    

}

TEST_CASE("Test for (+,+=) both valid and invalid"){

NumberWithUnits::read_units(units_file);

    c = a + b;
    CHECK_EQ(c , NumberWithUnits{2.5, "km"});
    double result = 5; 
    for(int i = 0; i < 1; i++){
        double r = (rand()+1) * 100;
        result = result + r;
        CHECK_EQ((c = c+r) , NumberWithUnits{result, "km"});
        result += r;
        CHECK_EQ((c += r) , NumberWithUnits{result, "km"});
    }
    CHECK_THROWS( d+=a );
    CHECK_THROWS( a+=d );
    

}

TEST_CASE("Test for (>,<,>=,<=) valid and invalid comparisons"){

NumberWithUnits::read_units(units_file);

CHECK_FALSE(b>a);
CHECK_FALSE(c>a);
CHECK_FALSE(c>=a);
CHECK_FALSE(a<=c);
CHECK(a>b);
CHECK(b>=c);

}

TEST_CASE("Test for (*,*=) both valid and invalid"){

NumberWithUnits::read_units(units_file);

    // c = a * b;
    // CHECK_EQ(c , NumberWithUnits{1, "km"});
    double result = 5; 
    for(int i = 0; i < 100; i++){
        double r = (rand()+1) * 100;
        result = result + r;
        CHECK_EQ((c = c*r) , NumberWithUnits{result, "km"});
        result *= r;
        CHECK_EQ((c *= r) , NumberWithUnits{result, "km"});
    }
    
}

