#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, t, x;
	cin >> n >> t;
	vector < int > v;
	v.push_back(0);
	for(int i = 1;i <= n;i++){
		cin >> x;
		v.push_back(v[i-1] + x);
	}
	int ans = 0;
	for(int i = 1;i <= n;i++){
		int tmp = t-(v[i]-v[i-1]);
		auto k = lower_bound(v.begin(), v.end(), v[i]+tmp);
		if(k == v.end()) ans = max(ans,n- i+1);
		else if(*k > v[i]+tmp){
			k--;
			ans = max(ans,(int)(k-v.begin()) - i+1);
		}
		else{
			ans = max(ans,(int)(k-v.begin()) - i+1);
		}
	}
	cout << ans << endl;
}