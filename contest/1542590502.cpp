#include <bits/stdc++.h>

using namespace std;
int n, z, k, d;
string s[1000], c;
int main(){
	cin >> c >> n;
	for(int i = 0; i < n; i++){
		cin >> s[i];
		if(s[i][0] == c[1]) z = 1;
		if(s[i][1] == c[0]) k = 1;
		if(s[i][0] == c[0] && s[i][1] == c[1]) d = 1;
	}
	if((z + k) == 2 || d == 1) cout << "YES";
	else cout << "NO";
}
