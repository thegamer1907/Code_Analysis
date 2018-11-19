#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	cin.ignore();
	int n;
	cin>>n;
	int a1[26];
	int a2[26];
	memset(a1,0,sizeof(a1));
	memset(a2,0,sizeof(a2));
	int flag=0;
	while(n--)
	{
	   string g;
	   cin>>g;
	   if(g==s)
	   {
	   	flag=1;
	   	
	   }
	   a1[g[0]-'a']++;
	   a2[g[1]-'a']++;
	}
	if(flag)
	{
		cout<<"YES"<<endl;
		return 0;
	}
	
	if(a1[s[1]-'a']>0 && a2[s[0]-'a']>0)
	{
	  cout<<"YES"<<endl;
	}
	else
	{
	   cout<<"NO"<<endl;
	}
	return 0;
}
