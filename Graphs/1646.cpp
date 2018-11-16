/*
                                Bismillahi-r-Rahmani-r-Rahim
                                        RhIeyAaD
                                    IIT-7th Batch,JU
*/
#include<bits/stdc++.h>
//#include<iostream>
//#include<stdio.h>
#include<string.h>
using namespace std;

#define PF              printf
#define SF              scanf
#define PR(a)           cout<<a<<endl
#define pf(a)           printf("%lld\n", a)
#define sf(a)           scanf("%lld", &a)
#define sf2(a,b)        scanf("%lld %lld", &a, &b)
#define sf3(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define line(a)         getline(cin,(a))
//int fx[]={+1,-1,+0,+0};
//int fy[]={+0,+0,+1,-1};
//int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
//int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move
//int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
//int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
#define ll              long long int
#define MAX             2134567891
#define MIN             INT_MIN
#define fr(i,n)         for(i=0;i<n;i++)
#define rep(i,n)        for(i=1;i<=n;i++)
#define FOR(i,a,n)      for(i=a;i<=n;i++)
#define mem(x,n)        memset(x,n,sizeof(x))
#define minn(a,b,c)     min(a,min(b,c))
#define maxx(a,b,c)     max(a,max(b,c))
#define T_C(t)          printf("Case %lld: ",t)
#define ans_int(t,c)    printf("Case %d: %d\n",t,c)
#define TC(t)           printf("Case %lld:\n",t)
#define ans(t,c)        printf("Case %lld: %lld\n",t,c)
#define SETP(n)         setprecision(n)
#define READ            freopen("F:\\Project\\Test_Case.txt","r",stdin)
#define WRITE           freopen("F:\\Project\\Output_Test.txt","w",stdout)
#define IO              ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define PAIR            pair<ll,ll>
#define MP              make_pair
#define pb(a)           push_back(a)
#define ff              first
#define ss              second
#define MOD             10000007
#define p6              1000007 ///10^6->6 zero after 1 **
#define PI              2*acos(0.0)
#define hi              printf("hi\n");
#define hlw             printf("hlw\n");
#define SN              4*p6
#define N               p6

ll x[N],y[N],z[N];
string s;
// map <ll,ll> mp;
//vector<ll>v;

int main()
{
    //IO;
    //while(1)
    //READ;WRITE;
{
    ll a,b=1,c=0,d,e,i,j,k,l,m,n,p,q,r,t,u,val,w,tc,mn=MAX,mx=0,sum=0,ans=0;
    cin>>n>>k;
    rep(i,n-1)
    {
        cin>>a;
        if(b==i)b+=a;
        if(b==k)c=1;
    }
    if(c==1)cout<<"YES";
    else cout<<"NO";

}
    return 0;
}

/*

*/

