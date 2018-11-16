#include <bits/stdc++.h>
#define FOR0(i,n) for (int i = 0; i < n; i++)
#define FOR(i,j, n) for (int i = j; i < n; i++)

using namespace std;

int main()
{
   int n, t;
   cin>>n>>t;

   int s[n-1];
   FOR0(i, n-1) cin>>s[i];

   int a[n]={0};
   for (int i = 0; i < n-1; ++i)
   {
      a[i] = i+1 + s[i];
   }

   int start = 0;
   int index = 0;

   while(start<t&&index<n)
   {
      start = a[index];
      index = start-1;
   }

   if(start==t)
      cout<<"YES"<<endl;
   else
      cout<<"NO"<<endl;
}