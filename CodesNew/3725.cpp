#include<bits/stdc++.h>
#define int long long
#define double long double
#define endl '\n'
using namespace std;


signed main(){
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	int n,m;
	int a[212345];
	cin>>n>>m;

	int mx = 0;
	for (int i=1; i<=n; i++){
		cin>>a[i];
		mx = max(a[i],mx);
	}
	int ans2 = mx + m;
	int ans1 = 0;
	bool change = 0;
	while(!change){
		for (int i=1; i<=n; i++){
			if(a[i] < mx && m > 0){
				a[i]++;
				m--;
				change = 1;
			}
		}
		if(!change){
			if(m == 0){
				change = 1;
				break;
			}
			else{
				mx++;
			}
		}
		else change = 0;
	}
	cout<<mx<<' '<<ans2<<endl;
	return 0;
}
