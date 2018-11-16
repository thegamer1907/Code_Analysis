#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, t;
	string s;
	cin>>n>>t;
	cin>>s;
	for(int i=0; i<t; i++) {
		for(int j=0; j<n-1; j++) {
			if(s[j]=='B' && s[j+1]=='G') {
				s[j+1]='B';
				s[j]='G';
				j++;
			}
		}
	}
	cout<<s<<endl;
	
}