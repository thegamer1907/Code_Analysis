#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include<queue>
#include<deque>
#include<stack>
#include<set>

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define endl "\n"
#define Endl endl
#define masuk cout<<"masuk\n";
#define ALL(a) a.begin(),a.end()
#define vi vector<int>

#define REPP(i,l,r,a) for(int i=l;i<=r;i+=a)
#define REP(i,l,r) REPP(i,l,r,1)
#define REVV(i,l,r,a) for(int i=l;i>=r;i-=a)
#define REV(i,l,r) REVV(i,l,r,1)

#define FOR(i,a) for(int i=0; i<a; i++)
#define FORD(i,a) for(int i=(int)a-1; i>=0; i--)

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

const int INF = (int)2e9;
const double EPS = (double)1e-9;
const double PI = (double)acos(-1);
const ll MOD = (ll)1e9+7;

int gcd(int a,int b)
{
	if(a<b) swap(a,b);
	if(a%b==0) return b;
	gcd(a%b,b);
}

bool palin(string s)
{
	int len = s.length();
	FOR(i,len/2)
	{
		if(s[i] != s[len-1-i])
		{
			return false;
		}
	}
	return true;
}

void fast_io()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}



int main()
{	
	
	//fast_io();
	//
	
	int n,m,cost,now;
	bool vis[10050];
	FOR(i,10010) vis[i]=false;
	queue<pii> q;
	
	cin>>n>>m;
	q.push(mp(0,n));
	vis[n]=true;
	
	while(!q.empty())
	{
		now = q.front().se;
		cost = q.front().fi;
		q.pop();
		
		if(now==m)
		{
			cout<<cost;
			break;
		}
		
		if(now!=1 && !vis[now-1])
		{
			vis[now-1]=true;
			q.push(mp(cost+1,now-1));
		}
		if(now*2<=10000 && !vis[now*2])
		{
			vis[now*2]=true;
			q.push(mp(cost+1,now*2));
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}