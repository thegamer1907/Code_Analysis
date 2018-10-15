#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
const int mx = 512345;
vector< string > v[mx];
string s[mx], ans[mx];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> s[i];
	}
	ans[n-1] = s[n-1];
	for(int i = n-2; i >= 0; i--){
		string prefix;
		bool less = 0;
		for(int j = 0; j < s[i].size(); j++){
			prefix.push_back(s[i][j]);
			if(!less){
				if(j == ans[i+1].size()) break;
				if(prefix.back() > ans[i+1][j]) break;
				if(prefix.back() < ans[i+1][j]) less = 1;
			}
			ans[i] = prefix;
		}
	}
	for(int i = 0; i < n; i++){
		cout << ans[i] << endl;
	}
}
