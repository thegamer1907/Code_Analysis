#include <iostream>
using namespace std;
int z=0,x=0,i,j,k=1,a[1000],n,s=0;
int main(){
cin>>n;
for(i=0;i<n;i++)
{cin>>a[i]; if(a[i]==1) ++s; else x=1;}
if(s==n) {cout<<n-1; return 0;}
for(i=0;i<n;i++) {
if(a[i]==0)
for(j=i+1;j<n;j++){
if(a[j]==0) ++k; else --k;
if(k>z) z=k;}
k=1;}
if(x==1&&z==0) ++z;
cout<<z+s;
return 0;
}