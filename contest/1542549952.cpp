#include <bits/stdc++.h>
using namespace std;
string a[100];
int main() {
	string pass;
	int c = 0;
	cin>>pass;

	int n;
	cin>>n;

	for(int i=0 ; i<n ; i++){
		cin>>a[i];
		if(a[i] == pass){
			cout<<"YES";
			return 0;
		}
	}

	for(int i=0 ; i<n ; i++){
		if(a[i][1] == pass[0]){
			c++;
			break;
		}
	}
	for(int i=0 ; i<n ; i++){
		if(a[i][0] == pass[1]){
			c++;
			break;
		}
	}
	if(c == 2) cout<<"YES";
	else cout<<"NO";
}