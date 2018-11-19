#ifdef __APPLE__
#include <cassert>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>
#include <stack>
#include <string>
#include <cstring>
#include <sstream>
#include <map>
#include <set>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <cctype>
#include <list>
#include <cmath>
#include <limits>
#include <bitset>
#include <numeric>
#include <climits>
#include <complex>
#else
#include<bits/stdc++.h>
#endif // __APPLE__
using namespace std;
typedef pair<int,int>   II;
typedef vector<II>     VII;
typedef vector<int>     VI;
typedef vector< VI > 	VVI;
typedef long long int LL;
typedef  unsigned long long int ULL;
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define SZ(a) (int)(a.size())
#define SET(a,b) memset(a,b,sizeof(a))
#define LET(x,a) __typeof(a) x(a)
#define ALL(c) (c).begin(),(c).end()
#define si(n) scanf("%d",&n)
#define dout(n) printf("%d\n",n)
#define sll(n) scanf("%lld",&n)
#define lldout(n) printf("%lld\n",n)
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define REP(i,a,b) for(int i = (int)a; i < (int)b; i++)
#define ROUNDOFFINT(d) d = (int)((double)d + 0.5)
#define TRACE
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1)	{
cerr << name << " : " << arg1 << std::endl;}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
     const char* comma = strchr(names + 1, ',');cerr.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);}
#else
#define trace(...)
#endif

//C



const int N = int(1e5+10);

int c[N][4];
bool ok=false;
vector<int> v;

void solve(int pos,vector<int> &v1)
{
    
    if(pos>=SZ(v))
    {
        int cnt[4]={0,0,0,0};
        for(int i=0;i<SZ(v1);i++)
        {
            for(int j=0;j<4;j++)
            {
                if(v1[i]&(1<<j))
                    cnt[j]++;
            }
        }
        if(SZ(v1) && cnt[0]<=SZ(v1)/2 && cnt[1]<=SZ(v1)/2 &&cnt[2]<=SZ(v1)/2 && cnt[3]<=SZ(v1)/2)
            ok=true;
        return;
    }
    solve(pos+1,v1);
    v1.PB(v[pos]);
    solve(pos+1,v1);
    v1.pop_back();
}
int main()
{
	//fr;fw;
	fast_io;
    
    int n,k;
    cin>>n>>k;
    set<int> s;
    REP(i,0,n)
    {
        int x=1;
        int tmp=0;
        REP(j,0,k)
        {
            cin>>c[i][j];
            tmp=tmp+c[i][j]*x;
            x=x*2;
        }
        if(s.find(tmp)==s.end())
        {
            s.insert(tmp);
            v.PB(tmp);
            //trace(tmp);
        }
    }
    vector<int> v;
    solve(0,v);

    if(ok)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


	return 0;
}




