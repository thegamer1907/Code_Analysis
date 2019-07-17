#pragma GCC optimize("Ofast")
#include <iostream>
#include <cstdio>
using namespace std;
#define int long long
int n,m,k;
int a[100005];
int ans=0;
int sum=0;

signed main()

{
	cin>>n>>m>>k;
	for (int i=1;i<=m;i++){
		cin>>a[i];
	}

	for (int i=1;i<=m;i++){
		ans++;
		int cnt=0;
		for (;i<=m;i++){
			cnt++;
			if ((a[i]-1-sum)/k!=(a[i+1]-1-sum)/k) break;
		}
		sum+=cnt;
	}

	cout<<ans<<endl;
	return 0;
}