#include <iostream>
#include <cmath>
using namespace std;

unsigned long long fact(unsigned long long n){
  unsigned long long m = 1;
  for (unsigned long long i = 1; i <= n; i++){   
    if (n == 0){
      m = 1;
    }
    else
      m *= i;
  }
return m;
}

unsigned long long fact2 (unsigned long long n){
  if (n == 1)
    return 1;
  else
    return n * fact2(n-1);
}

unsigned long long fibo(unsigned long long n){
  unsigned long long n1 = 0, n2 = 1, next = 0;

  for (int i = 1; i < n; i++){
        next = n1 + n2;
        n1 = n2;
        n2 = next;
    }
    return next;
}

unsigned long long fibo2(unsigned long long n){
    if (n == 0)
      return 0;

    if (n == 1)
      return 1;

  return fibo2(n-1) + fibo2(n-2);
}

unsigned long long choose (unsigned long long n, unsigned long long r){
  unsigned long long x = 1;

  for (int i = n; i > n-r; i--)
    x *= i;
  x = x/fact(r);
  return x;
 //    return (fact2(n) / (fact2(r) * fact2(n-r))); did not work, realized the factorial was too large too compute so changed the program to cancel common denominators
}

int main(){
  cout << fact(5) << ' ' << fact2(5) << '\n';
  cout << fact(15) << ' ' << fact2(15) << '\n';
  cout << fibo(5) << ' ' << fibo2(5) << '\n';
  cout << fibo(13) << ' ' << fibo2(13) << '\n';
  cout << choose(52,6) << '\n';

}
