#include <iostream>
#include <cmath>
using namespace std;

long long int min(long long int a, long long int b) {return (a<b)?a:b;}

bool good(long long int n, long long int k)
{
 long long int tot = 0;
 long long int nc = n;
 while (n > 0)
 {
  long long int m = min(k, n);
  n -= m;
  tot += m;
  n -= n/10;
 }
 return 2*tot >= nc;
}

int main()
{
 long long int n;
 cin >> n;
 long long int a = 0, b = n;
// if (n > 1000) {a = n / 26; b = n / 25;}
 while (b > a+1)
 {
  long long int c = (a+b)/2;
  if (good(n, c)) b = c; else a = c;
 }
 cout << b << "\n"; 
 return 0;
}
