#include<bits/stdc++.h>
using namespace std ;
int main(){
   int n,t;
      cin >> n >> t;
   int a[n+1] ;
   for(int i=1;i<n;i++)
   cin >> a[i] ;
   int k=a[1];
   int ii=1;
   while(ii<n)
   {
       ii=ii+k;
       if(ii==t){cout << "YES";return 0;}
       k=a[ii];
   }
   cout << "NO" ;
} 