#include<bits/stdc++.h>
using namespace std;
int n,m[500001],j,k,i;
main(){
cin>>n;
for(i=0;i<n;i++)
cin>>m[i];
sort(m,m+n);
for(j=0;j<n;j++) 
if(m[j]>=2*m[k]) 
k++;
cout<<n-min(n/2,k);
}