/*
                                Bismillahi-r-Rahmani-r-Rahim
                                        RhIeyAaD
                                    IIT-7th Batch,JU
*/
#include<bits/stdc++.h>
using namespace std;

#define ll              long long int
#define MAX             2134567891
#define INF             1e9 + 7
#define fr(i,n)         for(i=0;i<n;i++)
#define rep(i,n)        for(i=1;i<=n;i++)
#define ALL(n)          n.begin(),n.end()
#define mem(x,n)        memset(x,n,sizeof(x))
#define PAIR            pair<ll,ll>
#define MP              make_pair
#define pb(a)           push_back(a)
#define INS(a)          insert(a)
#define ff              first
#define ss              second
#define p6              1000007 ///10^6->6 zero after 1 **
#define hii             printf("hii\n");
#define NN              100
#define N               p6

ll x[N],y[N],z[N],n;
string s,S;
//vector<ll>v;
//vector< pair<ll,ll> >v;
//pair<ll,ll> pr;
// map <ll,ll> mp;
// map <ll,ll> mp :: iterator it;

int main()
{
    ll a,b,c=0,d,diff,e,f,g,i,j,k,l,m,in,mod,loc,p,q,r,u,val,w,t,tc,sz,lo,hi,mid,mn=MAX,mx=0,sum=0,ans=0;
    cin>>n;
    fr(i,n)cin>>x[i];
    fr(i,n)
    {
        for(j=i;j<n;j++)
        {
            fr(k,n)y[k]=x[k];
            for(k=i;k<=j;k++)
                y[k]=1-y[k];
                c=0;
            fr(k,n)
            {
                if(y[k]==1)c++;
            }
            mx=max(mx,c);
        }
    }
    cout<<mx<<endl;
    return 0;
}

/*

*/
