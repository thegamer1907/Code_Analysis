//be name khoda
//Pedram Sadeghian
// :)
#include <bits/stdc++.h>
using namespace std;
const long long N = 1e5+ 1;
int n, ans, a, h;
string s, e;
int main(){
	ios::sync_with_stdio(false), cin.tie(0);
	cin >> s >> n;
	for (int i = 0 ; i < n ; i++){
		cin >> e;
		if (not ans){
			if (e==s)
				ans = 1;
			if (e[0]==s[1]){
				if (h)
					ans = 1;
				a = 1;
			}
			if (e[1]==s[0]){
				if (a)
					ans = 1;
				h = 1;
			}
		}
	}
	if (ans){
		cout << "YES";
		return 0;
	}
	cout << "NO";
	return 0;
}
