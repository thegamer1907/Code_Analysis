#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,t,temp;
	int n;
	cin>>s;
	cin>>n;
	set<string> str;
	bool flag1=false,flag2=false;
	
	for(int i=0;i<n;i++){
		cin>>t;
		if(s[0]==t[1]) flag1=true;
		if(s[1]==t[0]) flag2=true;
		str.insert(t);
	}
	if(str.count(s) || (flag1 && flag2))
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}