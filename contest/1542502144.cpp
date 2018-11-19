#include<bits/stdc++.h>
using namespace std;
string s[200];
int main(){
	string str;
	cin>>str;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i];
		if(s[i]==str){
			cout<<"YES";
			return 0;
		}
	}
	bool p=0,q=0;
	for(int i=0;i<n;i++){
		if(s[i][0]==str[1]){
			p=1;
		}
		if(s[i][1]==str[0]){
			q=1;
		}
	}
	if(p&&q){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	return 0;
}