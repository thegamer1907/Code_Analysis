#include<bits/stdc++.h>

using namespace std;

int main()
{int n;
cin>>n;
int t;
cin>>t;
int a;
int p=1;
int flag=0;

for(int i=1;i<=n;i++)
{cin>>a;
if(i==p)
p=i+a;
if(flag==0)
if(p==t)
{flag=1;
cout<<"YES";}
}
if(flag==0)
cout<<"NO";
return 0;} 
