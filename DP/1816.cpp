#include<bits/stdc++.h>
using namespace std;
int main(){

	string s;
	cin>>s;
	int f=0,ff=0;
	for(int i=1;i<s.size();i++){
		if(s[i-1]=='A'&&s[i]=='B')
			f=1,i+=2;
		if(f==1&&s[i-1]=='B'&&s[i]=='A')
		{
			cout<<"YES";
			return 0;
		}
	}
	f=0,ff=0;
	for(int i=1;i<s.size();i++){
		if(s[i-1]=='B'&&s[i]=='A')
			f=1,i+=2;
		if(f==1&&s[i-1]=='A'&&s[i]=='B')
		{
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
	return 0;

}
