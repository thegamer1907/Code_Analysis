#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<stack>
#include<map>
#include<vector>
#include<queue>
#include<set>
using namespace std;
const int MAXN=1e5+5;
const double eps=1e-6;
const int INF=1e9+10;
const int mod=1e8;
#define ll long long
#define edl putchar('\n')
#define sscc ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define ROF(i,a,b) for(int i=a;i>=b;i--)
#define mst(a) memset(a,0,sizeof(a))
#define mstn(a,n) memset(a,n,sizeof(a))
#define zero(x)(((x)>0?(x):-(x))<eps)
int n,k;
ll m,k2,ans=0;
map<int,ll> mp,mpp;
int main()
{
    cin>>n>>k;
    mp.clear(),mpp.clear();
    if(k==1)
    {
    	FOR(i,1,n)
    	cin>>m,mp[m]++;
    	map<int,ll>::iterator it;
    	for(it=mp.begin();it!=mp.end();it++)
    	{
    		m=it->second;
    		if(m>=3)
    		ans+=m*(m-1)*(m-2)/6;
		}
	}
    else
    {
	   	k2=(ll)k*(ll)k;
	    FOR(i,1,n)
	    {
	    	cin>>m;
	    	mp[m]++;
	    	if(m!=0&&abs(m)%k2==0)
	    	ans+=mpp[m];
	    	if(m!=0&&abs(m)%k==0&&abs(m)*k<=INF)
	    	mpp[m*k]+=mp[m/k];
	    	//cout<<m<<" "<<ans<<endl;
		}
		if(mp[0]>=3)
		ans+=mp[0]*(mp[0]-1)*(mp[0]-2)/6;
	}
	cout<<ans<<endl;
}
