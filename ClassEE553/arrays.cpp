#include <iostream>
using namespace std;

int a;
int main (){
  int x = 2;

  int b [3]; //unitiniialized

  int c[3] = {1, 2, 3};
  int d[] = (1, 2, 3);
  int e[100] = (5); // e(0)=5 the rest are equal to zero

  for (int i = 0; i < 100; i++)
    e[i] = 3;

  int f[2][3] = {
    (5, 4, 3),
    (2, 1, 6)
  };

  for (int i = 0; i < 2; i++){
    for (int j = 0; j < 3; j++){
      cout << f[i][j] << ' ';
    }
  }
  cout << '\n';
}
