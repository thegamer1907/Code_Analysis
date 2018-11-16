#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   int n,t,i,j,o;
   cin >> n >> t;
   vector<int> a;
   for(i=1;i<=n-1;i++)
{
    cin >> o;
    a.push_back(o);
}
   j=1; int c=1;
   while(j<n)
   {
       j=j+a[j-1];
       if(j==t)
       {
           c=0;
           break;
       }
   }
   if(c==0)
    cout << "YES";
   else
    cout << "NO";
}
