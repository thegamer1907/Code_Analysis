#include<iostream>
#include<cstdio>
#include<cmath>
#define MAXN 100005
#define ll long long
using namespace std;

ll n;
ll sum;
ll a[MAXN];
ll maxx;

int main(){
	ios::sync_with_stdio(false);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum += a[i];
		maxx = max(maxx,a[i]);
	}
	ll ans = ceil(double(sum)/double((n-1)));
	cout<<max(ans,maxx)<<endl;
	return 0;
}