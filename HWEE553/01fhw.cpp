#include <iostream>
#include <cmath>
using namespace std;

int main(){
  float n = 0;
  float m = 0;

  for (int i = 1; i < 10000 ; i++){
    n += (1 / (pow(i,2)));
  }

  cout << n << endl;
  cout << sqrt(6 * n) << endl;

  for (int i = 10000; i >= 1; i--){
    m += (1 / (pow(i,2)));
  }

  cout << m << endl;
  cout << sqrt(6 * m) << endl;

}
