#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
const int mx = 512345;
string s[mx], ans[mx];
int main(){
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> s[i];
	}
	ans[n-1] = s[n-1];
	for(int i = n-2; i >= 0; i--){
		bool less = 0;
		int best = 0;
		for(int j = 0; j < s[i].size(); j++){
			if(!less){
				if(j == ans[i+1].size()) break;
				if(s[i][j] > ans[i+1][j]) break;
				if(s[i][j] < ans[i+1][j]) less = 1;
			}
			best = j;
		}
		ans[i] = s[i].substr(0, best+1);
	}
	for(int i = 0; i < n; i++){
		cout << ans[i] << "\n";
	}
}
