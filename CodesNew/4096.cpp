#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;
using ll = long long int;

int main()
{
 int n, q;
 cin >> n >> q;
 vector<ll> totstr(1,0);
 ll t = 0;
 for (int i = 0; i < n; ++i)
 {
  ll u;
  cin >> u;
  t += u; 
  totstr.push_back(t);  
 }
 ll tt = 0;
 int a = 0;
 int b;
 for (int i = 0; i < q; ++i)
 {
  ll u; 
  cin >> u;
  tt += u;
  b = n+1;
  while (b-a > 1)
  {
   int m = (a+b)>>1;
   if (totstr[m] <= tt) a = m; else b = m;
  }
  if (a == n) {a = 0; tt = 0;}
  cout << n - a << "\n";

 }
 
 return 0;
}
