#include <bits/stdc++.h>
using namespace std;
int i, n;
string s, tmp;
bool Flag1, Flag2;
int main(){
	cin >> s >> n;
	for(i = 0;i < n; i++){
		cin >> tmp;
		if(tmp == s){
			cout << "YES";
			return 0;
		}
		if(s[0] == tmp[1]){
			Flag1 = true;
		}
		if(s[1] == tmp[0]){
			Flag2 = true;
		}
	}
	if(Flag1 and Flag2) cout << "YES";
	else cout << "NO";
}