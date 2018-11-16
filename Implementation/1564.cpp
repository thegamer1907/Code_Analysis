#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,j,x=0,y=0,l=0;
	string s;
	cin>>s;
	j = s.size();
	for(i=0;i<j;i++)
	{
		if(s[i]=='1')
			{
				x++;
				y=0;
			}
		else
			{
				y++;
				x=0;
			}
		if(x>=7 || y>=7)
			l++;
	}
	if(l==0)
		cout<<"NO";
	else
		cout<<"YES";
}