/*
Nicolas Nuila
*/
#include <iostream>
#include <sstream>
using namespace std;

class Vec3d{

private:
   double x, y, z;

public:
   Vec3d(double x = 0, double y = 0, double z = 0) : x(x), y(y), z(z) {}
   Vec3d add(Vec3d in) const{
     return Vec3d(x + in.x, y + in.y, z + in.z);
   }

   double dot(Vec3d in) const{
     return x * in.x + y * in.y + z * in.z;
   }


  friend ostream& operator <<(ostream &s, const Vec3d& v) {               //friend ostream &operator<<( ostream &output, const Distance &D )
    s << v.x << "i + " << v.y << "j + " << v.z << "k";
    return s;
  }


  friend Vec3d operator +(const Vec3d& lhs, const Vec3d& rhs){
    double i = lhs.x + rhs.x;
    double j = lhs.y + rhs.y;
    double k = lhs.z + rhs.z;
    return Vec3d(i, j, k);
  }

  friend Vec3d operator *(const Vec3d& lhs, const Vec3d& rhs){
    double i = lhs.x * rhs.x;
    double j = lhs.y * rhs.y;
    double k = lhs.z * rhs.z;
    return Vec3d(i, j, k);
  }

  friend Vec3d operator *(const Vec3d& lhs, const double t){
    double i = lhs.x * t;
    double j = lhs.y * t;
    double k = lhs.z * t;
    return Vec3d(i, j, k);
  }

  friend Vec3d operator *(const double t, const Vec3d rhs){
    double i = rhs.x * t;
    double j = rhs.y * t;
    double k = rhs.z * t;
    return Vec3d(i, j, k);
  }

};


int main() {
  const Vec3d a(1.0, 2, 2.5); //(1.0, 2.0, 2.5) (x,y,z)
	cout << a << '\n';
	Vec3d b(5.0);         //(5.0, 0.0, 0.0)
	Vec3d c = a + b ;
	cout << c << '\n';
	Vec3d c2 = a.add(b);   // call a method
	cout << c2 << '\n';
	double d = a.dot(b); //  dot product = a.x*b.x + a.y*b.y + a.z*b.z
	cout << d << '\n';

	Vec3d e = a * 2;   //scalar multiplication
	cout << e << '\n';
	Vec3d f = 2 * a;   //scalar multiplication
	cout << f << '\n';
}
