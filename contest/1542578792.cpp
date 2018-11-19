#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	int n;
	cin>>s>>n;
	bool f1 = false;
	bool f2 = false;
	for(int i=0;i<n;i++)
	{
		string var;
		cin>>var;
		if(var == s) return cout<<"YES",0;
		
		if(s[0] == var[1]) f1 = true;
		if(s[1] == var[0]) f2 = true;
 	}
 	if(f1 && f2 ) cout<<"Yes";
    else cout<<"NO";
}