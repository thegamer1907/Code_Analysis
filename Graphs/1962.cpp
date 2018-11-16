#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   int l,n,m,k=1,p,d,f=0;
   vector<int> a,b;
   cin >> n;
   for(int i=0;i<n;i++)
   {
       cin >> p;
       a.push_back(p);
   }
   cin >> m;
   for(int i=0;i<m;i++)
   {
       cin >> p;
       b.push_back(p);
   }
   sort(a.rbegin(),a.rend());
   sort(b.rbegin(),b.rend());
   int c[n];
   for(d=0;d<n;d++){
   for(l=0;l<m;l++)
   {
       if(abs(a[d]-b[l]) <= 1)
       {
           f=1;
           p=l;
           break;
       }
   }
   if(f==1)
   break;
   }
   if(f==0)
   {
       cout << "0";
       return 0;
   }
   for(int i=d+1;i<n;i++)
   {
       for(int j=p+1;j<m;j++)
       {
           if(abs(a[i]-b[j])<=1)
           {
               p=j;
               k++;
               break;
           }
       }
   }
   cout << k;
}
