#include <bits/stdc++.h>
using namespace std;

int main(){
	string pass;
	getline(cin,pass);
	ws(cin);
	int n;
	cin>>n;
	if(n==0){
		cout<<"NO";
		return 0;
	}
	string s[n];
	for(int i=0;i<n;i++){
		ws(cin);
		getline(cin,s[i]);
		
	}
	for(int i=0;i<n;i++){
		if(s[i].compare(pass)==0){
			cout<<"YES";
			return 0;
		}
	}
	bool x=0,y=0;
	for(int i=0;i<n;i++){
		if(pass[1]==s[i][0]) x=1;
	}
	for(int i=0;i<n;i++){
		if(pass[0]==s[i][1]) y=1;
	}
	if(x==1&&y==1){
		cout<<"YES";
		return 0;
	}else{
		cout<<"NO";
		return 0;
	}

	return 0;
}