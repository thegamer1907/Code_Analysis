#include<bits/stdc++.h> 
  
using namespace std; 
int a;
int main() {
	string s;
	cin >>s;
	for(int i = 0; i < s.size(); i++) {
		for(int j = i+1; j < s.size(); j++) {
			for(int k = j+1; k < s.size(); k++) {
				a = s[i]-48, a *= 10;
				a += s[j]-48, a *= 10;
				a += s[k]-48;
				if(a%8 == 0) {
					cout<<"YES\n";
					cout<<a;
					exit(0);
				}
			}
		}
	}
	for(int i = 0; i < s.size(); i++) {
		for(int j = i+1; j < s.size(); j++) {
			a = s[i]-48, a *= 10;
			a += s[j]-48;
			if(a%8 == 0) {
				cout<<"YES\n";
				cout<<a;
				exit(0);
			}
		}
	}
	for(int j = 0; j < s.size(); j++) {
		a = s[j]-48;
		if(a%8 == 0) {
			cout<<"YES\n";
			cout<<a;
			exit(0);
		}
	}
	cout<<"NO";
} 