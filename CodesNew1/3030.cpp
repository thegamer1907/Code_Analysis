#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int k; cin >> k;
	string a;
	cin >> a;
	int n = a.size();
	vector<int> left(n, 0);
	for(int i = 0;i < n;i++){
		if(a[i] == '1')
			left[i] = 1;
		else
			left[i] = 0;
	}

	unordered_map<long long, long long> mp;
	long long ans = 0, temp = 0;
	for(int i = 0;i < n;i++){
		temp += left[i];
		if(temp == k)
			ans++;
		if(mp.find(temp) != mp.end()){
			ans += mp[temp];
		}
		mp[temp+k]++;
	}
	
	cout << ans << endl;
}