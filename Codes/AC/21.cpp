#include<bits/stdc++.h>
using namespace std;

typedef long double db;

int n,l,a[2005];

db res;

int main(){
cout<<fixed;
cin>>n>>l;
for(int i=0;i<n;i++) cin>>a[i];

sort(a,a+n);

res=0;

res=max(res,(db)(a[0]));
res=max(res,(db)(l-a[n-1]));

for(int i=0;i<n-1;i++) res=max(res,(db)(a[i+1]-a[i])*0.5);

cout<<setprecision(3)<<res<<endl;
return 0;
}
