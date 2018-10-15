#include <bits/stdc++.h>
using namespace std;


int main(){
	int n,q;
	cin >> n >> q;
	vector<long long> pref(n + 1, 0);
	for(int i = 0;i < n;++i){
		long long a;
		cin >> a;
		pref[i + 1] = pref[i] + a;
	}
	long long sum = pref[n];
	long long last = 0;
	while(q--){
		long long a;
		cin >> a;
		if(last + a >= sum){
			last = 0;
			cout << n << endl;
			continue;
		}
		last = last + a;
		int ind = upper_bound(pref.begin(), pref.end(), last) - pref.begin();
		cout << n + 1 - ind << endl;
	}
	return 0;				
}
