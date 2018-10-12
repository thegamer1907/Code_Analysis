#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define INF 2000000000
#define DESPACITO2 1000000000000000
#define DESPACITO 1000000000000000000
#define MOD 1000000007
#define ll long long
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
#define vii vector<ii>
#define si set<int>
#define msi map<string,int>
#define REP(i,a,b) for(int i=int(a);i<=int(b);i++)
#define TRvi(c,it) for(vi::iterator it=(c).begin();it!=(c).end();it++)
#define TRvii(c,it) for(vii::iterator it=(c).begin();it!=(c).end();it++)
#define TRmsi(c,it) for(msi::iterator it=(c).begin();it!=(c).end();it++)
 
 
using namespace std;


int main()
{
    IOS;
    #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin >> n;
    string arr[n+1];
    REP(i,1,n)
    	cin >> arr[i];
   	vector<string>ans;
   	ans.pb(arr[n]);
    for(int i=n-1;i>=1;i--)
    {
    	string s1;
    	REP(j,0,min(arr[i].length()-1,ans[n-i-1].length()-1))
    	{
    		if(arr[i][j]>ans[n-1-i][j])
    		{
    			break;
    		}
    		else if(arr[i][j]==ans[n-i-1][j])
    			s1.pb(arr[i][j]);
    		else
    		{
    			//cerr << ans[n-1-i] << "\n";
    			s1=arr[i];
    			//cerr << s1 << "\n";
    			break;
    		}
    	}
    	ans.pb(s1);
    }
    for(int i=n-1;i>=0;i--)
    	cout << ans[i] << "\n";
}