// KALAM

#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
const int N = 3e5 + 5;
const int MOD = 1e9 + 7;
const ld infld = 1e18;
int n,k;
bool a[N];
bool F(int t){
	int zz = 0;
	for(int i = 0;i < t;i++){
		zz += !a[i];
	}
	if(k >= zz)return true;
	for(int i = t;i < n;i++){
		zz = zz + (!a[i]) - (!a[i - t]);
		if(k >= zz)return true;
	}
	return false;
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin >> n >> k;
	for(int i = 0;i < n;i++){
		cin >> a[i];	
	}
	int l = -1,r = n + 1;
	while(r - l > 1){
		int mid = (l + r) / 2;
		if(F(mid))l = mid;
		else r = mid;
	}
	int zz = 0;
	cout << l << endl;
	for(int i = 0;i < l;i++){
		zz += !a[i];
	}
	if(zz <= k){
		for(int i = 0;i < n;i++){
			if(i < l)a[i] = 1;
			cout << a[i] << ' ';
		}
		return 0;
	}
	for(int i = l;i < n;i++){
		zz = zz + (!a[i]) - (!a[i - l]);
		if(zz <= k){
			for(int j = 0;j < n;j++){
				if(j <= i && j > i - l)a[j] = 1;
				cout << a[j] << ' ';
			}
			return 0;
		}
	}
	
	
	
	
	return 0;
}
