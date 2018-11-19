#include <bits/stdc++.h> 
using namespace std; 

int main (){
	string str[105], s;
	int n, m = 0, cn = 0, k = 0; 
	cin >> s; 
	cin >> n;
	if (n == 1){
		cin >> str[0]; 
		if (s[0] == str[0][0] && s[1] == str[0][1] || s[0] == str[0][1] && s[1] == str[0][0]){
			cout << "YES" << endl; 
			cn = 1; 
			return 0;
		}
	}
	for (int i = 0; i <n; ++i){
		cin >> str[i];
	}
	
	for (int i = 0; i < n; ++i){
		if (str[i][0] == s[0] && str[i][1] == s[1]){
			cout << "YES" << endl;
			cn = 1; 
		}
		if (str[i][1] == s[0])++m;
		if (cn == 1)return 0;
	}
	
	if (m >= 1){
			for (int i = 0; i < n; ++i){
			if (str[i][0] == s[1]){
				cout << "YES" << endl;
				return 0;
				cn = 1; 
			}
			if (cn == 1)break; 
		}
	}
	if (cn == 0)cout << "NO" << endl; 
}