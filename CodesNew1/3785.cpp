#include<bits/stdc++.h>
#define pf printf
#define sf scanf
#define ll long long
#define llu unsigned long long
#define M 300000
#define pb push_back
#define ppb pop_back
#define F first
#define S second
#define Check(x,w) (x&(1<<w))==(1<<w)?true:false
#define pii pair<int,int>
#define pvi pair<vector<int>,int>
#define EPS 1e-12
#define PI acos(-1)
#define Mems(p,n) memset(p,n,sizeof(p))
#define MOD 1000003
#define inf -2000000000;
#define INT(c)  ((int)((c) - '0'))
#define CHAR(i) ((char)(i + int('0')))
using namespace std;

template<class T>
inline bool fs(T &x)
{
    int c=getchar();
    int sgn=1;
    while(~c&&c<'0'||c>'9')
    {
        if(c=='-')sgn=-1;
        c=getchar();
    }
    for(x=0; ~c&&'0'<=c&&c<='9'; c=getchar())
        x=x*10+c-'0';
    x*=sgn;
    return ~c;
}

int n,m,ara[105];

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int a,b,c,d,ef,g,h,i,j;
    fs(n);
    fs(m);
    a=0;
    for(i=0; i<n; i++)
    {
        fs(ara[i]);
        a=max(a,ara[i]);
    }
    b=0;
    for(i=0; i<n; i++)
    {
        b+=(a-ara[i]);
    }
    b=max(0,m-b);
    c=b/n;
    if(b%n!=0)
        c++;
    pf("%d %d\n",a+c,a+m);
    return 0;
}
