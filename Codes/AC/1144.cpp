#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mem(a,b) memset(a,b,sizeof(a))

const int N=1e5+5;
struct node{
	int m,s;
	bool operator< (node t){
		return m<t.m;
	}
}a[N];
ll sum[N];
int main(){
	int n,d;
	ll ans=0;
	cin>>n>>d;
	for(int i=1;i<=n;i++)cin>>a[i].m>>a[i].s;
	sort(a+1,a+1+n);
	for(int i=1;i<=n;i++)sum[i]=sum[i-1]+a[i].s;
	for(int i=1;i<=n;i++){
		int t=lower_bound(a+1,a+1+n,node{a[i].m+d,0})-a;
		ans=max(sum[t-1]-sum[i-1],ans);
	}
	cout<<ans<<endl;
	return 0;
}