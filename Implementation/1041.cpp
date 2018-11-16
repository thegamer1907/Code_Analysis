#include <bits/stdc++.h>
using namespace std;
#define FastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

int32_t main()
{
	int n,t;
	string s;
	cin>>n>>t>>s;
	while(t--)
	{
	    for(int i=1; i<n; i++)
	    if(s[i-1]=='B' && s[i]=='G')
	    {
	        swap(s[i-1], s[i]);
	        i++;
	    }
	}
	cout<<s;
}
