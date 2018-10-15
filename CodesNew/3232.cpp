#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
  int n,m;cin>>n>>m;
int free=0;
int mx = 0;
for(int i=0;i<n;i++) {
int a;cin>>a;
mx=max(mx,a);free-=a;
}
free+=mx*n;
int m1=m-free;
int ans1 = mx;
if(m1>0) {
ans1+=(m1+n-1)/n;
}
int ans2=mx+m;
cout<<ans1<<" "<<ans2;
	return 0;
}
