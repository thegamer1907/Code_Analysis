#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,i,otv[1000000],j,a,z,q[100000];
cin>>n;
int s=0;
j=0;
for (i=0;i<n;i++){
cin>>a;
z=j+1;
s+=a;
for (z;z<=s;z++){otv[z]=i+1;j++;}
}
cin>>n;
for (i=0;i<n;i++)cin>>q[i];
for (i=0;i<n;i++)cout<<otv[q[i]]<<endl;
}