#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define mp          make_pair
#define pii         pair<int,int>
#define vi          vector<int>
#define all(a)      (a).begin(),(a).end()
#define sz(x)       (int)x.size()
#define hell        1000000007
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define ios        	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
	string s,t;
	cin>>s;
	int n,x=0,y=0;
	cin>>n;
	while(n--)
	{
		cin>>t;
		if(s==t)
		x=1,y=1;
		if(t[1]==s[0])
		x=1;
		if(t[0]==s[1])
		y=1;
	}
	if(x&&y)
	cout<<"YES";
	else
	cout<<"NO";
}
