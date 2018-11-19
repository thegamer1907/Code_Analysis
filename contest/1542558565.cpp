#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<cstdlib>
#include<sstream>
#include<vector>
#include<queue>
#include<map>
#include<stack>
//#include<bits/stdc++.h>
#define pfl1(a)         printf("%lld\n", a)
#define sfl1(a)         scanf("%lld", &a)
#define sfl2(a,b)       scanf("%lld %lld", &a, &b)
#define sfl3(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)
#define ll              long long int
#define MAX             INT_MAX
#define pb(x)           push_back(x)
#define fr(i,n)         for(i=0;i<n;i++)
#define rep(i,n)        for(i=1;i<=n;i++)
#define mem(x,n)        memset(x,n,sizeof(x))
#define maxx(a,b,c)     max(a,max(b,c))
#define ans_int(t,c)    printf("Case %d: %d\n",t,c);
#define ans(t,c)        printf("Case %lld: %lld\n",t,c);
#define pii             pair<int,int>
#define ff              first
#define ss              second
using namespace std;
///int fx[]={+1,-1,+0,+0};
///int fy[]={+0,+0,+1,-1};
///int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
///int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move
///int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
///int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
ll x[9];
char s[9],s1[7];

int main()
{//while(1)
{
    ll a,b,c,d,e,w,i,j,k=0,l,m,n,p,q,r,t,tc,z,sum;
    cin>>s;
    cin>>l;
    while(l--)
    {
        cin>>s1;
        if(s1[1]==s[0]&&s1[0]==s[1])
        {
            k=1;
        }
        if(s[0]==s1[0]&&s[1]==s1[1])k=1;
        if(s1[1]==s[0])x[0]=1;
        if(s1[0]==s[1])x[1]=1;
    }
   // cout<<k<<" "<<x[0]<<" "<<x[1]<<endl;
    if(k||(x[0]&&x[1]))cout<<"YES\n";
    else cout<<"NO\n";

}
    return 0;
}









