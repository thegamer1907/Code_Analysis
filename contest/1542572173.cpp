#include <bits/stdc++.h>
using namespace std;

int main() {
	string s,a;
	long long int n,i,j,k=0,m=0,ans;
	cin>>s>>n;
	for(i=0;i<n;i++)
	{
		cin>>a;
		if(a==s)
		{ cout<<"YES"; return 0; }
		else if(s[0]==a[1])
		k++;
		else if(s[1]==a[0])
		m++;
		if(s[0]==a[1] && s[1]==a[0])
		{ cout<<"YES"; return 0; }
	}
	if(k>0 && m>0)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}