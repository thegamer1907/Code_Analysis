#include <iostream>
using namespace std;
long long n,m,x=0,i,a[100000],b[100000]={0};
int main(){
cin>>n>>m;
for(i=0;i<n;i++) cin>>a[i];
for(i=n-1;i>=0;i--)
{if(!b[a[i]-1]) {++x; b[a[i]-1]=1;}
a[i]=x;}
while(m--)
{cin>>x; cout<<a[x-1]<<endl;}
return 0;
}