#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int n;
	cin>>n;
string a[n+5];
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
	}
	string b;
	int tg1=0,tg2=0;
	for(int i=1;i<=n;++i)
	{
		if(s== a[i] ){cout<<"YES";return 0;}
		if(s[0]==a[i][1] && s[1]==a[i][0]){
			cout<<"YES";return 0;
		}
		if(s[0]==a[i][1] ) tg1=1;
			if(s[1]==a[i][0] ) tg2=1;
	}
	if(tg1==1 && tg2==1) cout<<"YES";
	else 	cout<<"NO";
	return 0;	
}
