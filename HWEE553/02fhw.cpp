/*
Nicolas Nuila
Used code written in class from Prof Kruger and help from Joseph Puciloski
*/
#include <iostream>
#include <fstream>
using namespace std;

double ArrayAverage(int x[], int n){
  double x = 0;
  for(int i = 0; i < n; i++)
    y += y/n;
  return y;
}

int main(){
  ifstream f("2f.dat");
  int n;
  f >> n;
  int x[n]; // int* x = new int[n];   ..delete [] x;

  for (int i = 0; i < n; i++)
    f >> x[i];

  cout << ArrayAverage(x, n);
  return 0;
}
