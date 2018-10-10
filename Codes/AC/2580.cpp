//raja1999
#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <climits>
#include <utility>
#include <algorithm>
#include <cmath>
#include <queue>
#include <stack>
#include <iomanip> 
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setfill -   cout << setfill ('x') << setw (5); cout << 77 <<endl;prints xxx77
//setprecision - cout << setprecision (14) << f << endl; Prints x.xxxx


using namespace std;
#define f(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) f(i,0,n)
#define fd(i,a,b) for(i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define vi vector< int >
#define vl vector< ll >
#define ss second
#define ff first
#define ll long long
#define pii pair< int,int >
#define pll pair< ll,ll >
#define sz(a) a.size()
#define inf (1000*1000*1000+5)
#define all(a) a.begin(),a.end()
#define tri pair<int,pii>
#define vii vector<pii>
#define vll vector<pll>
#define viii vector<tri>
#define mod (1000*1000*1000+7)
#define pqueue priority_queue< int >
#define pdqueue priority_queue< int,vi ,greater< int > >

//std::ios::sync_with_stdio(false);
int c[10000003],a[1000001];
vi v;
vi ::iterator it,it1;
set <int >s;
int main(){
	std::ios::sync_with_stdio(false);
	int n,m,i,j,l,r,x;
	cin>>n;
	rep(i,n)
	{
		cin>>a[i];
	}
	for(i=2;i*i<=10000001;i++)
	{
		if(c[i]!=0)
			continue;
		for(j=i*i;j<=10000001;j+=i)
		{
			c[j]=i;
		}
	}
	rep(i,n)
	{
		x=a[i];
		while(c[x]!=0)
		{
			if(s.find(c[x])==s.end())
			{
				s.insert(c[x]);
				v.pb(c[x]);
			}
			x/=c[x];
		}
		if(x!=1&&s.find(x)==s.end())
		{
			v.pb(x);
		}
		s.clear();
	}
	sort(v.begin(),v.end());
	cin>>m;
	while(m--)
	{
		cin>>l>>r;
		it=lower_bound(v.begin(),v.end(),l);
		it1=upper_bound(v.begin(),v.end(),r);
		it1--;
		cout<<it1-it+1<<endl;
	}
} 
