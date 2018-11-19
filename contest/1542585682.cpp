#include<bits/stdc++.h>
using namespace std;
bool rev(string a,string b)
{
	if(a[0]==b[1] && a[1]==b[0]) return true;
	return false;
}
int main() {
	string s;
	cin>>s;
	int t,f=0,a=0,b=0;
	cin>>t;
	while(t--)
	{
		string tp;
		cin>>tp;
		if(rev(s,tp) || s==tp) f=1;
		if(s[0]==tp[1]) a=1;
	            if(s[1]==tp[0]) b=1;
	}
	if(a&b) f=1;
	if(f) cout<<"YES";
	else
	cout<<"NO";
	return 0;
}