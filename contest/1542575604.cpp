#include <bits/stdc++.h>
using namespace std;
string t[105];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
    int n;
	string s;
	cin >> s;
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> t[i];
		if(t[i] == s)
			return cout << "YES",0;
	}
	for(int i = 1; i <= n; i++){
		if(t[i][1] == s[0]){
			for(int j = 1; j <= n; j++)
				if(t[j][0] == s[1])
					return cout << "YES", 0;
		}
	}
	cout << "NO";
}
