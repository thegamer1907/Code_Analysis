#include <bits/stdc++.h>
using namespace std;


int main(){
	string s;
	cin>>s;
	int o=0,l=0;
	char cur=s[0];
	if(cur=='0') o++;
	if(cur=='1')l++;
	
	for(int x=1;x<(int)s.length();x++){
		if(s[x]==cur){
			if(cur=='0')
				o++;
			if(cur=='1')
				l++;
		}
		else{
			if(cur=='0' && o<7)
				o=0;
			if(cur=='1' && l<7)
				l=0;
			cur=s[x];
			if(cur=='0')
				o++;
			if(cur=='1')
				l++;

		}
	}
	if(l>6 || o>6)
		cout<<"YES";
	else
		cout<<"NO";

	
}