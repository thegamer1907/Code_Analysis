#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,i,j,ans=1,t=0;
string x,x1;
cin>>x;
cin>>n;
vector < string > a;
for(i=0;i<n;i++)
{
cin>>x1;
a.push_back(x1);
}
for(i=0;i<n;i++)
{
if(a[i]==x||(a[i][1]==x[0]&&a[i][0]==x[1]))
{
t=1;
}
}
if(t==1)
cout<<"YES"<<endl;
else
{
int k1=0,k2=0;
for(i=0;i<n;i++)
{
if(a[i][1]==x[0])
k1=1;
else if(a[i][0]==x[1])
k2=1;
}
if(k1==1&&k2==1)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
}