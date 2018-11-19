#include<bits/stdc++.h>                                 

#define mod                          1000000007
#define ll                           long long
#define vll                          vector<ll>
#define pll                          vector< pair<ll,ll> >
#define pb                           push_back
#define mp                           make_pair
#define F                            first  
#define S                            second
#define all(v)                       v.begin(),v.end()
#define rep(i,a,b)                   for(int i=a;i<b;i++)

#define READ                         freopen("input.txt", "r", stdin);
#define WRITE                        freopen("output.txt", "w", stdout);
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int n;
    cin >> n;
    string w[n];
    rep(i,0,n)
    {
    	cin >> w[i];
    	if(w[i]==s)
    	return cout << "YES",0;
	}
	rep(i,0,n)
	{
		rep(j,0,n)
		{
			if(s[0]==w[i][1] && s[1]==w[j][0])
			return cout << "YES",0;
		}
	}
	cout << "NO";
}
