#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define bac(i,a,b) for(int i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define F first
#define S second
typedef long long ll;
typedef vector< ll > vi;
typedef vector<pair<int,int> > vpii;
#define all(c) c.begin(),c.end()
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define INF 10000000000000
#define MOD 1000000007
#define N 100005
ll i,j,k,n,q,m,d,su,sx,sy,prod=1,ans,maxi,a,b,x,y,o,e,f,mini=INF,t,cnt;
string s;
ll ar[105],br[105];
int main()
{
    
    ios
    int ti=1;
    //cin>>ti;
    while(ti--)
    {
    	cin>>n;rep(i,0,n)cin>>ar[i];
    	cin>>m;rep(i,0,m)cin>>br[i];
    	sort(ar,ar+n);sort(br,br+m);
    	for(i=0,j=0;i<n&&j<m;)
    	{
    		if(ar[i]-br[j]>1)j++;
    		else
    		{
    			if(br[j]-ar[i]>1)i++;
    			else
    			{
    				cnt++;i++;j++;
    			}
    		}
    		
    	}
    	cout<<cnt;
    }
    
    return 0;
}