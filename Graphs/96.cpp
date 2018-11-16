#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,t;
	string s;
	cin>>n>>t;
	cin>>s;
	while(t--){
		int i=0;
		while(i<n){
			if(s[i]=='B' && s[i+1]=='G'){
				s[i]='G';
				s[i+1]='B';
				i+=2;
			}
			else
				i++;
		}
	}
	cout<<s;
	return 0;
}