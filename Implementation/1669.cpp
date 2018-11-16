#include <bits/stdc++.h>

using namespace std;

int main(){
	int n=0,m=0;
	string s;
	cin >> s;
	for (int i=0; i<s.size(); i++){
		if(s[i]=='1'){
			n++;
			m=0;
		}
		if (s[i]=='0'){
			m++;
			n=0;
		}
		if (m==7){
			cout << "YES";
			return 0;
		}
		if (n==7){
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}
