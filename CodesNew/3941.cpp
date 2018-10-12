#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define re return
int main(){
ll n,q;
cin >> n >> q;
ll a[n+10],b[q+10],c[n+10];
c[0]=0;
for (int i=1;i<=n;++i) cin >> a[i];
for (int i=1;i<=n;++i) c[i]=c[i-1]+a[i];
ll sum=0,vol=0;
for (int i=1;i<=q;++i){
cin >> b[i];
if (c[n]-sum<=b[i]){
sum=0;
vol=0;
cout << n << endl;
continue;
}
ll l=0,r=n;
while (r-l>1){
ll sr=(r+l)/2;
if (c[sr]>sum+b[i]) r=sr;
else l=sr;
}
sum+=b[i];
cout <<n-r+1 << endl;
}
re 0;
}