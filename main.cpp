//------------------------------
//  DO NOT MODIFY NEXT LINE
//------------------------------
#include "catch.hpp"
//------------------------------

// Put the assignment code here

class Quaternion 
{
public:
 double a; double b; double c; double d;
 double num=a+b+c+d;
 Quaternion();
 Quaternion(double,double,double,double);
 
 bool operator+(const Quaternion p)
 {
   Quaternion new_num;
   new_num.num+=num;
   if ( new_num.num==p.num)
   {
     return true;
   }
  return false;
 }

 bool operator-(const Quaternion p)
 {
  Quaternion new_num;
  if (new_num.num-num==p.num)
    {
      return true;
    }
  return false; 
 }

bool operator*(const Quaternion p)
{
    Quaternion new_num;
    new_num.num*=2;
    if (new_num.num==p.num)
    {
      return true;
    }
    return false;
}

bool operator==(const Quaternion p)
{
  if (num==p.num)
  {
  return true;
  }
  return false;
}

};





//------------------------------
//   DO NOT MODIFY TEST CASES
//------------------------------
TEST_CASE( "Assignment" ) {
    SECTION( "q1" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        REQUIRE( q == p );
    }
    SECTION( "q2" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( (q + p) == r );
    }
    SECTION( "q3" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{0.0, 0.0, 0.0, 0.0};
        REQUIRE( (q - p) == r );
    }
    SECTION( "q3" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( (q * 2.0) == r );
    }
}
//------------------------------
