#include <iostream>
#include <string>
using namespace std;

int main(){
  int n = 0;
  cout << "Please enter an integer." << endl;
  cin >> n;
  string num = "";
  while (n != 0){
    num = (char)(n % 10 + '0') + num;
    n = n / 10;
  }
  cout << num << endl;
}
