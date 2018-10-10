/*
Pradyumn Sinha 
Delhi Technological University
*/
// #include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<list>
#include<set>
#include<map>
#include <iterator>
#include <stack>
#include <queue>
#include <deque>
#include <bitset>
#include<sstream>
#include<cmath>

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> OST;
using namespace std;
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define pf push_front
#define vi vector<int>
#define vl vector<ll>
#define vii vector<pii >
#define vll vector<pll>
#define pll pair<ll,ll>
#define pii pair<int,int>
#define pi 3.14159265358979
#define EL printf("\n")
#define OK printf("OK");
#define foreach(i,t) for(auto i =t.begin();i!=t.end();i++) 
#define pdn(n) printf("%d\n",n)
#define pln(n) printf("%lld\n",n)
#define psn(n) printf("%s\n",n)
#define pcn(n) printf("%c\n",n)
#define sl(n) scanf("%lld",&n)
#define sf(n) scanf("%Lf",&n)
#define sd(n) scanf("%d",&n)
#define ss(n) scanf("%s",&n)
#define pn printf("\n")
#define SZ(x) ((int)(x.size()))
#define PI 3.14159265
#define inf 1e18
#define mod 1000000007
#define precise(n,k) fixed<<setprecision(k)<<n
#define DBG(c) cout << #c << " = " << c << endl;
#define RTIME ((double)clock()/(double)CLOCKS_PER_SEC)
#define fequal(a,b) (fabs(a - b)<(1e-9))
int toint(const string &s) { stringstream ss; ss << s; int x; ss >> x; return x; }
string tostring ( int number ){  stringstream ss; ss<< number; return ss.str();}

typedef long long ll;
typedef long double lf;

ll pw(ll a,ll b) 
{if(b==0) return 1; if(b==1) return a;  ll ans=pw(a,b/2); if(b&1) 
return (((ans*ans)%mod*a)%mod); 
 return (ans*ans)%mod; }	


ll const NMAX=1e6+20;
int z[NMAX],cnt[NMAX];
void zalgo(string &s)
{
	int n=s.length();
	int l=0,r=0;
	for(int i=1;i<n;i++)
	{
		if(r<i)
		{
			l=i;
			r=i;
			while(r<n&&s[r-l]==s[r])
				r++;
			r--;
			z[i]=r-l+1;
		}
		else
		{
			int k=i-l;
			if(z[k]<r-i+1)
				z[i]=z[k];
			else
			{
				l=i;
				while(r<n&&s[r-l]==s[r])
					r++;
				r--;
				z[i]=r-l+1;
			}
		}
		cnt[0]++;
		cnt[z[i]+1]--;
	}
	for(int i=1;i<n;i++)
		cnt[i]+=cnt[i-1];
}

int main()
{
	string s;
	cin>>s;
	int n=s.length();
	zalgo(s);
	int len=0;
	for(int i=1;i<n;i++)
		if(z[i]==n-i&&cnt[z[i]]>=2)
			len=max(len,z[i]);
	if(!len)
	{
		printf("Just a legend\n");
		return 0;
	}
	cout<<s.substr(0,len)<<"\n";
	
	return 0;
}