#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,k,t=0,a[100000];
cin>>n>>k;
for(int i=1;i<n;i++)
{
cin>>a[i];
}
for(t=1;t<k;t+=a[t]);
cout<<(t==k?"YES":"NO");
return 0;
}