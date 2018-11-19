#include<bits/stdc++.h>

using namespace std;

#define ll long long

#define all(x) x.begin(), x.end()

int main(){

	cin.tie(0);
	cin.sync_with_stdio(0);

	#ifdef Cyborg101
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	
	string str;
	cin >> str;

	bool f[256] = {false} , s[256] = {false};

	int n;
	cin >> n;

	for(int i = 0; i < n; ++i){
		string t;
		cin >> t;

		if(t == str){ 
			cout << "YES" << endl;
			return 0;
		}

		f[t[0]] = true;
		s[t[1]] = true;
	}

	puts((s[str[0]] && f[str[1]]) ? "YES" : "NO");

	return 0;
}