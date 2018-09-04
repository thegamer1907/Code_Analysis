#include<bits/stdc++.h>
#define int long long
#define N 100005 
using namespace std;
int a[N],n,S,b[N],T;
bool check(int k){
	T=0;
	for(int i=1;i<=n;i++)b[i]=a[i]+i*k;
	sort(b+1,b+1+n);
	for(int i=1;i<=k;i++)T+=b[i];
	return (T<=S);
}
void init(){
	cin>>n>>S;
	for(int i=1;i<=n;i++)cin>>a[i];
	}
void solve(){
	int l=0,r=n;
	while(l<r){
		int mid=(l+r+1)/2;
		if(check(mid))l=mid;
		else r=mid-1;
		}
	check(l);
	cout<<l<<' '<<T<<endl;
	//for(int i=1;i<=n;i++)cout<<check(i)<<endl;
	}
main(){
	init();
	solve();
	}
