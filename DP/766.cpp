#include <bits/stdc++.h>
using namespace std;
// #include <boost/multiprecision/cpp_int.hpp> 
// using namespace boost::multiprecision; 
//cpp_int
typedef long long  ll;
typedef vector< pair<long long,long long> > vpll;
typedef vector< pair<int,int> > vpii;
#define max3(a,b,c)     max(a,max(b,c))
#define min3(a,b,c)     min(a,min(b,c))
#define max4(a,b,c,d)   max3(a,b,max(c,d))
#define f(i,a,b) 		for(i=a;i<b;i++)
#define sf(x)           scanf("%lld",&x)
#define pf(x)           printf("%lld",x)
#define tle(x)          ios_base::sync_with_stdio(x),cin.tie(NULL),cout.tie(NULL)
#define add(x,y)        accumulate(x, y, 0);  //v.begin(),v.end()
#define stacki          stack<int>
#define stackll         stack<long long>
#define queuei          queue<int >
#define queuell         queue<long long >
#define pr_qi           priority_queue<int >
#define pr_qll          priority_queue<long long >
#define mapi            map<int,int>
#define mapll           map<long long,long long>
#define fi              first
#define se              second
#define pb              push_back
#define mp              make_pair
#define mod             1000000007
#define m5              (int)1e5+5

//int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
//int dx[8]={-1,0,1,1,1,0,-1,-1},dy[8]={1,1,1,0,-1,-1,-1,0};

int main()
{
    tle(0);
    ll n,i,j;
    cin>>n;
    ll a[n],b[n],s=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            b[i]=-1;
            s++;
        }
        else
            b[i]=1;
    }
    if(s==n)
    {
        cout<<s-1;
        exit(0);
    }
    ll cur,ma=0;
    cur=b[0];
    ma=max(ma,cur);
    for(i=1;i<n;i++)
    {
        cur=max(b[i],cur+b[i]);
        ma=max(ma,cur);
    }
    cout<<s+ma;
    return 0;
    
}