/*
  Nicolas Nuila
*/
#include <iostream>
using namespace std;

unsigned long long n = 0;

bool isPrime(unsigned long long n){

    if  (n == 3)
      return true;

    else if (n == 1)
        return false;

    else if (n % 2 == 0)
      return false;

    else{
      for(int i=3; i * i <= n; i += 2){
        if (n % i == 0 )
          return false;
      }
  }
    return true;
}


int main(){
  cout << "Please enter a positive whole integer. Negative numbers will not return a correct result." << endl;

  cin >> n;

  while(cin.fail() || n <= 0) {
  cin.clear();
      cout << "Error, please enter an integer value (positive with no decimal points)." << endl;
      cin.ignore(256,'\n');
      cin >> n;
    }

  if (isPrime(n) == true){
      cout << "Your number is prime!" << endl;
      return 0;
    }
  else
      cout << "Your number is not prime." << endl;
      return 0;
  }
