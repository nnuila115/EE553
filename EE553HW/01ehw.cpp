#include <iostream>
using namespace std;

int main(){
  int n = 0;
  long long f = 1;
  cout << "Please enter an integer (whole, positive number) greater than 0 to calculate the factorial:" << endl;
  cin >> n;

  while(cin.fail() || n <= 0) {
  cin.clear();
      cout << "Error, please enter an integer value (positive with no decimal points)." << endl;
      cin.ignore(256,'\n');
      cin >> n;
  }

  if (n > 1){
      for (int i = 1; i <= n; i++){
        f *= i;
    }

    cout << "The factorial of " << n << " is " << f << endl;
  }
  else {
    cout << " you cannot calculate the factorial of 1 or 0. Exiting program." << endl;
  }
}
