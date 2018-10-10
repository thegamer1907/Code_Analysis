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
    int n,m;
    cin >> n >> m;
    map<int,int>vals;
    ll arr[n+1][m+1];
    vals[n]=n;
    REP(i,1,n)
    {
    	REP(j,1,m)
    		cin >> arr[i][j];
    }
    REP(j,1,m)
    {
    	int end=n;
    	for(int i=n-1;i>=1;i--)
    	{
    		if(arr[i][j]<=arr[i+1][j])
    			vals[i]=max(vals[i],end);
    		else
    		{
    			end=i;
    			vals[i]=max(vals[i],end);
    		}
    	}
    }
    int q;
    cin >> q;
    while(q--)
    {
    	int l,r;
    	cin >> l >> r;
    	if(vals[l]>=r)
    		cout << "Yes\n";
    	else
    		cout << "No\n";
    }

}