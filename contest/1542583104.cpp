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

//B



const double EPS = 1e-10;


int main()
{
	//fr;fw;
	fast_io;
    double h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    
    if(h==12)
        h=0;
    if(m==60)
        m=0;
    if(s==60)
        s=0;
    if(t1==12)
        t1=0;
    if(t2==12)
        t2=0;
    
    vector<double> v;
    h=(h/12.0)*360.0;
    m=(m/60.0)*360.0;
    s=(s/60.0)*360.0;
    t1=(t1/12.0)*360.0;
    t2=(t2/12.0)*360.0;
    
    h += (30.0/60.0)*(m/6.0);
    h += (30.0/3600.0)*(s/6.0);
    m += (1/10.0)*(s/360.0);
    
    
    v.PB(h);v.PB(m);v.PB(s);
    sort(ALL(v));
    
    if(t1>t2)
        swap(t1,t2);
    
    trace(h,m,s,t1,t2);
    bool ok1=false,ok2=false,ok3=false;
    if(h>=t1 && h<=t2)
        ok1=true;
    if(m>=t1 && m<=t2)
        ok2=true;
    if(s>=t1 && s<=t2)
        ok3=true;
    
    if((ok1 && ok2 && ok3)||(!ok1 && !ok2 && !ok3))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


	return 0;
}




