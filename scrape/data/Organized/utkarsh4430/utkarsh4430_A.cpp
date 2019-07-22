#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define int long long
#define INF 1000000009
#define MOD 1000000007
int32_t main(){
	ios::sync_with_stdio(false);
	int n,m,k;
	cin>>n>>m>>k;
	vector<int> p;
	int x;
	for(int i=0;i<m;i++){
		cin>>x;
		p.push_back(x-1);
	}
	int l = 0,u = k-1;
	int i = 0;
	int flag = 0;
	int ans = 0;
	// int prev = -1;
	while(i<p.size()){
		int count = 0;
		int v = 0;
		int o = (p[i]-flag)/k;
		l = o*k;
		u = (o+1)*k -1;
		while((p[i]-flag)>=l && (p[i]-flag)<=u && i<p.size()){
			if(v==0){
				v=1;
				// cout<<i<<" ";
				ans++;
			}
			i++;
			count++;
		}
		flag += count;
		
		// if(v==0 && prev==u){
		// 	break;
		// }
		// if(v==0){
		// 	l+=k;
		// 	u+=k;
		// 	// prev = u;
		// 	continue;
		// }
		// cout<<i<<" ";
		// ans++;
	}
	cout<<ans;
	return 0;
}