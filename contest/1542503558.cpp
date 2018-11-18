#include<bits/stdc++.h>
using namespace std;

string s,t;
bool fh,ft;
int n ;

int main(){
	cin >> s;
	cin >> n;
	for(int i = 0;i < n;i++){
		string a;
		cin >> a;
		if(a == s){
			cout << "YES" << endl;
			return 0;
		}
		if(a[1] == s[0])
			fh = true;
		if(a[0] == s[1])
			ft = true;
	}
	if(fh && ft)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}