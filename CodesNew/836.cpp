#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N=1e6+5;
ll a[N],dp[N];
int main(){
	int n,m;
	cin >> n >> m;
	map<string,int> mp;
	for(int i=0;i<n+m;i++){
		string x;
		cin >> x;
		mp[x]++;
	}
	if(n>m){
		cout << "YES\n";
	}
	else if(n<m){
		cout << "NO\n";
	}
	else{
		int cnt=0;
		for(map<string,int>:: iterator it=mp.begin();it!=mp.end();it++){
			if(it->second==2)
			cnt++;
		}
		if(cnt%2){
			cout << "YES" << endl;
		}
		else
		cout << "NO" << endl;
	}
	return 0;
}