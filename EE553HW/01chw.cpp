/* Nicolas Nuila
HW 01C
EE 553 Professor Dov Kruger
*/
#include <iostream>
using namespace std;

int main(){
  int n = 0;

  for (int i = 0; i <= 100; i++){
    n = (n + i);
  }
  cout << "Here is the sum of all integers from 0 to 100 using a for loop:" << endl;
  cout << n << endl;

  int m = (100 * (100 + 1))/2;
  cout << "Here is the sum of all of the integers from 0 to 100 using the Gauss Formula:" << endl;
  cout << m;
}
