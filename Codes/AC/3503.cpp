#include <iostream>
#include<algorithm>

#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;

int solve(long long k, long long n) {
  long long v = 0, p=0;
  while (n) {
    long long tt = min(n, k);
     v += tt;
    n -= tt;
    p += n/10;
    n -= n/10;
  }
  return v >= p;
}
  
// To execute C++, please define "int main()"
int main() {
  long long n;
  cin>>n;
  
  long long lo = 0, hi = n;
  while (hi - lo > 1) {
    long long m = (hi + lo) / 2;
    if (solve(m, n)) {
     hi = m; 
    } else {lo = m;}
  }
  
  cout<<hi<<"\n";
}
