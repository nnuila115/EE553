#include <iostream>
using namespace std;

int main(){
  float sum1 = 0;
  float sum2 = 0;

  for (int i = 1; i < 101; i++){
    sum1 += (1 / (float) i);
  }
  cout << "Here is the sum from 1 to 1/100" << endl;
  cout << sum1 << endl;

  for (int i = 100; i > 0; i--){
    sum2 += (1 / (float) i);
  }
  cout << "Here is the sum from 1/100 to 1" << endl;
  cout << sum2 << endl;

  cout << "Here is the difference between the first and second attempts:" << endl;
  cout << (sum1 - sum2) << endl;
}
