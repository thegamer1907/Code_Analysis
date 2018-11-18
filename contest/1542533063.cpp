#include <bits/stdc++.h>
using namespace std;

inline void done(){cout << "YES" << '\n'; exit(0); }

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	string pwd; cin >> pwd;
	int n; cin >> n;
	bool a=false, b=false;
	for(int i=0;i<n;i++){
		string ss; cin >> ss;
		if(ss==pwd) done();
		if(ss[0]==pwd[1])a=true;
		if(ss[1]==pwd[0])b=true; 
	}
	if(a and b) done();
	cout << "NO" << '\n';
	return 0;
}