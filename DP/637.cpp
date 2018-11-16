#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);	
	cin.tie(0);
	int l,r,equal = 0;
	string s;
	vector<int> v;
	cin >> s;
	int n;
	cin >> n;
	v.push_back(0);
	for(int i = 1; i < s.length(); i++){
		if(s[i] == s[i-1])
			v.push_back(++equal);
		else v.push_back(equal);
	}
	for(int i = 0 ; i < n; i++){
		cin >> l >> r;
		l--; r--;
		cout << v[r] - v[l] << endl;	
	}
}