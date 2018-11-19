#include "bits/stdc++.h"
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
using namespace std;
int main(){
	string ans;
	cin >> ans;
	int n;
	cin >> n;
	bool le = false, ri = false;
	for(int e = 0; e < n; e++){
		string v;
		cin >> v;
		if(ans == v){
			 cout << "YES" << endl;
			return 0;
		}
		if(v[0] == ans[1]) ri = true;
		if(v[1] == ans[0]) le = true;
	}
	if(le && ri) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
