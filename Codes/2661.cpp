#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
#include<vector>
#include<math.h>
#include<map>
#include<algorithm>
#include<set>
using namespace std;

typedef long long ll;
typedef vector< int > VI;
typedef vector< pair<int,int > > VPI;
typedef vector< ll > VLL;
typedef vector< pair< ll ,ll > > VPLL;
typedef map<int, int > MpII;
typedef map<ll , int > MpLI;
typedef map<ll , ll > MpLL;
typedef set< int > StI;
typedef set < ll > StL;
typedef set< int > :: iterator StIit;
typedef set< ll > :: iterator StLit;

const int mxn = 1e6 + 10;
const ll inf = 1e15;

#define sc(n) scanf("%d",&n)
#define prn(n) printf("%d",n)
#define lsc(n) scanf("%I64d", &n)
#define lprn(n) printf("%I64d",n)
#define nwl() printf("\n")
#define sp() printf(" ")
#define loop(n) for(int i= 0; i < n; i++)
#define rep(n) for(int i = 1; i <= n; i++)
#define make(x , y) make_pair(x,y)
#define pb(x) push_back(x)

string P, T;

int pi[mxn];
int cnt[mxn] , pL;

void pf()
{
	int k = 0;
	pi[0] = 0;
	pi[1] = 0;
	for(int i = 2; i < pL; i++)
	{
		while(k>0 && P[k+1]!=P[i])
		{
			k = pi[k];
		}
		if(P[k+1]==P[i]){
			 k += 1;
			cnt[k] +=1;
		}
		pi[i] = k;
	}
}

int main()
{	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>P;
	P = "#"+P;
	pL= P.size();
	pf();
	int ans = pi[pL-1];
	while(ans > 0 && cnt[ans] < 2)
	{
		cnt[pi[ans]] += cnt[ans];
		ans = pi[ans];
	}
	if(!ans)
	{
		cout<<"Just a legend"<<endl;
		return 0;
	}
	//cout<<ans<<endl;
	for(int i= 1; i <= ans; i++)
	{
		cout<<P[i];
	}
	cout<<endl;
	return 0;
}
