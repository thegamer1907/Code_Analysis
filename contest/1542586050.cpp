#include <bits/stdc++.h>
using namespace std;

int main(){
	string pass,s;cin>>pass;
	int n,flag=0;cin>>n;
	vector<string>v1,v2;
	while(n--){
		cin>>s;
		if(s==pass){
			flag=1;
			break;
		}
		if(s[0]==pass[1])
			v1.push_back(s);
		if(s[1]==pass[0])
			v2.push_back(s);
	}
	if(v1.size()!=0 && v2.size()!=0)
		flag=1;
	if(flag)
		cout<<"YES";
	else
		cout<<"NO";
}
