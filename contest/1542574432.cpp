#include <bits/stdc++.h>
using namespace std;
string a[10001];
int main(){
	string s;
	int n;
	cin >>s>>n;
	bool ok=0,ko=0;
	for(int i=1;i<=n;++i){
		cin>>a[i];
		if(a[i]==s){
			cout<<"YES";
			return 0;
		}
	}
	for(int i=1;i<=n;++i){
		if(a[i][0]==s[1]){
			ok=1;
		}
		if(a[i][1]==s[0]){
			ko=1;
		}
	}
	if(ok&&ko){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}