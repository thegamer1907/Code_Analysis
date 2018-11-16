#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int *xx = new int[n];
   int *yy = new int[n];
   int *zz = new int[n];

   for (int i = 0; i<n; i++)
   {
       cin>>xx[i]>>yy[i]>>zz[i];
   }
   int s1=0,s2=0,s3=0;

   for (int i = 0; i<n; i++)
   {
       s1 += xx[i];
       s2 += yy[i];
       s3 += zz[i];
   }

   if (s1 ==0 && s2 == 0 && s3 == 0)
    cout<<"YES";
   else cout<<"NO";
   delete xx;
   delete yy;
   delete zz;
}
