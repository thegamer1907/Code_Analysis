#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	string pass;
	cin>>pass;
	int n,i,ca=0,cb=0,cc=0;
	cin>>n;
	string s[n];
	for(i=0;i<n;i++)
	{
		cin>>s[i];
		if(s[i][1]==pass[0])
			ca=1;
		if(s[i][0]==pass[1])
			cb=1;
		if(s[i]==pass)
			cc=1;
	}
	if(cc==1 || (ca==1 && cb==1))
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}