#include<bits/stdc++.h>
using namespace std;


int main()
{
int n,t,r,i;
cin>>n>>t;
int a[n];
int b[n];
for(i=1;i<n;i++)
cin>>a[i];


r=1+a[1];
for(i=2;i<=n;i++)
{
if(i==r)
{
r=i+a[i];
if(i==t)
{cout<<"YES";
return 0;
}
}
if(i>t)
{
cout<<"NO";
return 0;
}
}
}
