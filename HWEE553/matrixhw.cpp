#include <iostream>
#include <cstring>
using namespace std;


class BadSize{
private:
  int linenum;
  const string filename;
public:
  BadSize(int linenu, const char filename[]) : linenum(linenum), filename(filename){}
  friend ostream& oeprator <<(ostream& s, const BadSize& e){
    return s << "BadSize at" << e.filename << ";" << e.linenum << '\n';
  }
};

class Matrix{
private:

public:
  friend Matrix operator +constant Matrix& a, const Matrix& b) {
    if (a.rows != b.rows || a.cols != b.cols)
      throw Badsize(__LINE__, __FILE__);
  }
}

int main(){
  try {
    int a = 5, b = 6;
    if (a != b)
      throw BadSize(__LINE__, __FILE__);
  } catch (const BadSize& e) {
    cout << e << '\n';
  }
}
