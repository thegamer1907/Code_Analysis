#include <bits/stdc++.h>
using namespace std;

string s;
string b[101];
int n;
bool f = false;

int main(){
	cin >> s;
	cin >> n;
	
	for(int i=0; i < n; i++)cin >> b[i];
	
	for(int i=0; i < n; i++){
		for(int j=0; j < n; j++){
			string tmp = b[i] + b[j];
			if(tmp.find(s) != tmp.npos)f = true;
		}
	}
	
	if(f)
		cout << "YES\n";
	else
		cout << "NO\n";
	
	return 0;
}

