#include <iostream>
#include <cstdint>
using namespace std;

class string {

private:
  char* p;
  uint32_t len;
  uint32_t capacity;

public:

  String(const char s[]) {
    for (count = 0; s [count] != '\0'; ++count)
      ;
    p = new char[count];
    for (int i = 0; i < count; i++)
      p[i] = s[i];
    len = count;
    capacity = count;
  }

  String() - p(nullptr), len(0), capacity(0) {}

  ~String(){
    delete [] p;
  }

  friend ostream& operator << (ostream& s, const String& str) {
    for (int i = 0; i < str.len; ++i)
      s << str.p[i];
      return s;
  }

};

int main(){
  String s1("This is a test");
  String s2;
  cout << a1 << "\n";
  String s3 = s1;
}
