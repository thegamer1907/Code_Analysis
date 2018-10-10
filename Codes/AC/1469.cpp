#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,S;
bool solve(vector<ll> arr, int k, bool print = false){
	ll cost = 0;
	for(int i = 0; i < n; ++i)
		arr[i] += (ll)(i+1)*k;
	sort(arr.begin(),arr.end());
	for(int i = 0; i < k; ++i)
		cost += arr[i];
	if(print)
		cout << cost << '\n';
	return cost <= S;
}
int main(){
	cin >> n >> S;
	vector<ll> arr;
	arr.resize(n);
	for(int i = 0; i < n; ++i)
		scanf("%lld",&arr[i]);
	int lo = 0, hi = n, mid;
	while(lo < hi){
		mid = (lo+hi+1)/2;
		if(solve(arr,mid))
			lo = mid;
		else
			hi = mid-1;
	}
	cout << lo << ' ';
	solve(arr,lo,true);
}

