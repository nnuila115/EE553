#include <iostream>
using namespace std;

class Fraction{
private:
  int num, den;
public:
  Fraction(int num, int den) : num(num), den(den) {}    //default constructor onpy written if no constructor is written yourself
  Fraction(int num) : num(num), den(1) {}
  Fraction() : num(0), den(1) {}

  friend ostream& oeprator <<(ostream& s, Fraction f) {
    return s << f.num << "/" << f.den;
  }
  friend Fraction operator +(Fraction a, Fraction b){
    return Fraction(a.num * b.den + b.num * a.den, a.den * b.den);
  }
  friend Fraction operator -(Fraction a, Fraction b){
    return Fraction(a.num * b.den - b.num * a.den, a.den * b.den);
  }
  friend Fraction operator -(Fraction a)
    return Fraction(a.num, a.den);
};

int main(){
  Fraction x(1,2);
  cout << x;  //passed by value, x is not changed
  const Fraction y(1,3);
  Fraction z = x +y;
  Fraction w = x -y;
  Fraction f = -x;

  int a = 5;
  int b = a++;  //add 1 to a, but first b = a, b=5, a=6
  int c = ++a;  // first add 1 to a, then c = a,  a = 7, c=7

  
}
