#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long i,j,k,l,t,r,m,n,a[12345],b,c,d,x,y,z, s;
string p,q;
int main() {
   cin >> n>>m;
   if (m > 1){
      cout << "Yes";
      return 0 ;
   }
   for (i = 0; i < n; i ++){
      cin >> a[i];
      if (a[i] == 0)
         k = i;
   }
   cin >> a[k];
   for (i = 0; i < n-1; i ++){
      if (a[i] >= a[i+1]){
         cout << "Yes";
         return 0;
      }
   }
   cout << "No";
   return 0;
}
