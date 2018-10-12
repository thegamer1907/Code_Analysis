#include <bits/stdc++.h>
#define pb push_back
#define rep(i,n) for(int i=0;i<n;i++)
#define repp(i,x,n) for(int i=x;i<n;i++)
using namespace std;
int t[101];
int main() {
	int n;
	string s;
	vector<string> v;
	cin >> n;
	rep(i,n)cin >> s,v.pb(s.substr(1));
	s = v.back();
	for(int i = n - 2 ; i >= 0; i--){
		int j = 0, ln = min(v[i].size(),s.size());
		int same = 1;
		while(j < ln && same == 1){
			if(s[j] == v[i][j]){j++;}
			else if(s[j] > v[i][j]) same = 2;
			else same = 0;
		}
		if(same == 2) s = v[i];
		else if(same == 1){
			if(v[i].size() > s.size()) v[i] = v[i].substr(0,ln),s = v[i];
			else if(v[i].size() < s.size()) s = v[i];
		}
		else{
			v[i] = v[i].substr(0,j);
			s = v[i];
		}
	}
	rep(i,n){
		cout << "#" << v[i] << '\n';
	}
	return 0;
}