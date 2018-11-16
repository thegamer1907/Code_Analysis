#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   int n,m,f=1;
   cin >> n >> m;
   if(n>=m)
   {
       cout << n-m;
       return 0;
   }
   int c=0;
   while(n<m)
   {
       if(m%2)
       {
           m++;
           c++;
       }
       m=m/2;
       c++;
   }
   c=c+(n-m);
   cout << c;
}
   
