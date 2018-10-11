#include <iostream>
using namespace std;
using ll = long long int;

int main()
{
 int n;
 cin >> n;
 int tmin = 1500000000; 
 for (int i = 0; i < n; ++i)
 {
  int a; 
  cin >> a;
  int te = n*((a-i+n-1)/n) + i;
  if (te < tmin) tmin = te;
 }
 cout << (tmin%n)+1 << "\n";
 return 0;
}
