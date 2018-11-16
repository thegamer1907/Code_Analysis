#include<bits/stdc++.h>
using namespace std;
string s;
int cnt;
int dan(int x)
{
	if(cnt==7)
		return 7;
	if(x+1==s.length()-1 && s[x+1]==s[x])
		return cnt+1;
		
	if(x+1!=s.length()-1 && s[x+1]==s[x])
	{
		cnt++;
		dan(x+1);
	}
	else
		return cnt;
	
}


main()
{
	cin>>s;
	for(int i=0 ; i<s.length()-1 ; i++)
	{	cnt=1;
		if(dan(i)==7)
		{
			cout<<"YES";
			return 0;
		}
		
	}
	cout<<"NO";
}
