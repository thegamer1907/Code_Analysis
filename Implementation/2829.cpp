#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define INF 2000000000
#define MOD 1000000007
#define MOD2 100000000
#define ll long long
#define vi vector<int>
#define pb push_back
#define ii pair<int,int>
#define vii vector<ii>
#define si set<int>
#define msi map<string,int>
#define REP(i,a,b) for(int i=int(a);i<=int(b);i++)
#define TRvi(c,it) for(vi::iterator it=(c).begin();it!=(c).end();it++)
#define TRvii(c,it) for(vii::iterator it=(c).begin();it!=(c).end();it++)
#define TRmsi(c,it) for(msi::iterator it=(c).begin();it!=(c).end();it++)
 
 
using namespace std;

bool compare(const pair<pair<ll,ll>,int>&a,const pair<pair<ll,ll>,int>&b)
{
	if(a.first.first!=b.first.first)
		return(a.first.first<b.first.first);
	return(a.first.second>=b.first.second);
}

int main()
{
    #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
    #endif
    IOS;
    int n;
    cin >> n;
    vector<int>ans;
    if(n%2==0)
    {
    	while(n>0)
    	{
    		ans.pb(2);
    		n-=2;
    	}

    }
    else
    {
    	while(n>3)
    	{
    		ans.pb(2);
    		n-=2;
    	}
    	ans.pb(3);
    }
    cout << ans.size() << "\n";
    REP(i,0,ans.size()-1)
    	cout << ans[i] << " ";

}