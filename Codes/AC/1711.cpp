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

LL n,m,k;

void check(LL mid ,LL &x)
{
    REP(i,1,n+1)
    {
        x+=min(m,(mid-1)/i);
    }
}

int main()
{
	//fr;fw;
	fast_io;
    
    cin>>n>>m>>k;
    
    LL L=1,H=n*m+1;
    
    while(L+1<H)
    {
        LL mid = (L+H)>>1;
        LL x=0;
        check(mid,x);
        if(k<=x)
            H=mid;
        else
            L=mid;
    }
    cout<<L<<endl;



	return 0;
}




