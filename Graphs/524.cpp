#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

const int N=1e5+5;

int32_t main()
{
	IOS;
	string s;
	int n,t;
	cin>>n>>t;
	cin>>s;
	while(t--)
	{
	  for(int i=0;i<n-1;i++)
	   if(s[i]=='B'&&s[i+1]=='G')
	   {
	      s[i]='G';
	      s[i+1]='B';
	      ++i;
	   }
	}
	cout<<s;
	return 0;
}