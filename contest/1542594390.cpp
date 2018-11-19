#include <bits/stdc++.h>
using namespace std;

string S,s;
int n;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> S;
	cin >> n;
	int dpn=0,blkg=0;
	while (n--){
		cin >> s;
		dpn|=s[0]==S[1];
		blkg|=s[1]==S[0];
		if (s==S){
			cout << "YES\n";
			return 0;
		}
	}
	if (dpn&&blkg){
		cout << "YES\n";
	}else{
		cout << "NO\n";
	}
}
