#include <bits/stdc++.h>

using namespace std; 
int main(){
	
	string s;
	cin >> s;
	if (s.size()>=7){

		for (int i=0;i<s.size()-6;i++){
			if (s[i]==s[i+1] and s[i+2]==s[i+1] and s[i+3]==s[i+2] and s[i+4]==s[i+3] and s[i+5]==s[i+4] and s[i+5]==s[i+6]  ){
				cout << "YES";
				return 0;
			}
		}
	}
	cout << "NO";
	return 0;
}
