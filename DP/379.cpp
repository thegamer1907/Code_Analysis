#include <bits/stdc++.h>
using namespace std;
int i,n,m,x,a[100],b[101]={0};
int main(){
cin>>n;
for(i=0;i<n;i++) cin>>a[i];
cin>>m;
while(m--){cin>>x; ++b[x];}
sort(a,a+n);
m=0;
for(i=0;i<n;i++)
if(b[a[i]-1]) {++m; --b[a[i]-1];}
else if(b[a[i]]) {++m; --b[a[i]];}
else if(b[a[i]+1]) {++m; --b[a[i]+1];}
cout<<m;
return 0;
}