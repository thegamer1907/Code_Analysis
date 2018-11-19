#include <bits/stdc++.h>

using namespace std;

int main() {
	char s[2];
	int n;
	cin >> s;
	cin >> n;
	char a[n][2];
	for (int i=0; i<n; i++)
		cin >> a[i];
	for (int i=0; i<n; i++){
		if ((a[i][0]==s[0] && a[i][1]==s[1]) or (a[i][0]==s[1] && a[i][1]==s[0])){
			cout << "YES";
			return 0;
		}
	}
	for (int i=0; i<n; i++){
		if(a[i][1]==s[0]){
			for (int j=0; j<n; j++){
				if (a[j][0]==s[1]){
					cout << "YES";
					return 0;	
				}
			}
		}
	}
	cout << "NO";
	return 0;
}