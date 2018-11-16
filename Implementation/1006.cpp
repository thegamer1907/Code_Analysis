
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int n,t,i,j;
	cin>>n>>t;
	string s;
	cin>>s;
	int m=s.size();
	while(t--)
	{
		for(i=0;i<m-1;i++)
		{
			if(s[i]=='B' && s[i+1]=='G')
			{
				s[i]='G';
				s[i+1]='B';
				i++;
			}
		}
	}
	cout<<s;

}