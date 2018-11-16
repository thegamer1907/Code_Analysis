#include<bits/stdc++.h>
using namespace std;

int main ()
{
int n,t,j=1;
cin>>n>>t;
int a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
while(t>j)
{
j=j+a[j-1];
}
if(t==j)
cout<<"YES";
else
cout<<"NO";
return 0;
}