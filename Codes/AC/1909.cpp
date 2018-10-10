#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k, x;
	long long res=0, tmp;
	map<int, long long>m, m2;
	cin >> n >> k;
	int a[n];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	for(int i=0; i<n; i++){
		if(a[i]%k==0){
			res+=m2[a[i]/k];
			m2[a[i]]+=m[a[i]/k];
		}
		m[a[i]]++;
	}
	cout << res;
	return 0;
}