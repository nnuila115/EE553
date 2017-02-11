/* Nicolas Nuila
  EE 553 Professor Dov Kruger
  HW 01
*/

#include <iostream>
using namespace std;

int main(){
  int n = 0;
  cout << "Please input a positive integer." << endl;
  cin >> n;

    while(cin.fail() || n <= 0) {       //this is from a stack excahnge I read about validating the cin input as an integer
    cin.clear();
        cout << "Error, please enter an integer value (positive with no decimal points)." << endl;
        cin.ignore(256,'\n');
        cin >> n;
    }

  while (n != 1){
    if(n % 2 == 0){
      n = n / 2;
      cout << n << endl;
    }
    else{
      n = (n * 3) + 1;
      cout << n << endl;
    }
  }

  cout << "The process has finished." << endl;
}
