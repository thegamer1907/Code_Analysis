#include <iostream>
using namespace std;

int main() {
	bool first, second;
	first=false;
	second=false;
	string s,t;
	int n;
	cin>>s;
	cin>>n;
	for (int x=0;x<n;x++){
		cin>>t;
		if (s==t){
			cout<<"YES"<<endl;
			return 0;
		}
		else {
			if (s[1]==t[0]){
				second=true;
			}
			if (s[0]==t[1]){
				first=true;
			}
		}
	}
	if (first && second){
		cout<<"YES"<<endl;
	}
	else {
		cout<<"NO"<<endl;
	}
	return 0;
}