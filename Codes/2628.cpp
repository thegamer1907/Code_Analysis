/*
    Shakti Mani Tripathi
    B.Tech 2nd Year Electrical Engineering
    Handle ID: smtcoder
    MNNIT Allahabad
*/
#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define mem(x,y) memset(x,y,sizeof(x))
#define lli long long
#define li long
#define mapii map<int,int>
#define mapllii map<long long int,int>
#define mapilli map<int,long long int>
#define mapllilli map<long long int,long long int>
#define vi vector <int>
#define vlli vector <long long int>
#define pii pair<int,int>
#define pilli pair<int,long long int>
#define pipilli pair<int, pair<int, long long int> >
#define pllii pair<long long int int,int>
#define pllilli pair<long long int,long long int>
#define vppiii vector<pair<int,pair<int,int> > >
#define vpii vector<pair<int,int> >
#define vpipii vector<pair<int,pair<int,int> > >
#define vpipilli vector<pair<int,pair<int,long long int> > >
#define ch char
#define frp(x,y,z) for(x=y;x<z;x++)
#define frm(x,y,z) for(x=y;x>z;x--)
#define mmax 10000000009
#define mmin -1000000009
#define pr printf
#define gc getchar
//const lli mod=1000000007;
using namespace std;
void sc(int &x)
{
    register int c = gc();
    x = 0;
    int neg = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {neg=1;c=gc();}
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
}
lli power(lli a,lli b,lli m)
{
    lli res=1;
    while(b>0)
    {
        if(b%2!=0)
            res=((res%m)*(a%m))%m;
        a=((a%m)*(a%m))%m;
        b/=2;
    }
    return res%m;
}
lli gcd(lli a,lli b){return ((b==0)?a:gcd(b,a%b));}
int num[10000002],prime[10000005],ans[10000005];
int main()
{
    int i,j,k=0,arr,m,n;
    lli l,r;
    scanf("%d",&n);
    frp(i,1,n+1)
    {
        scanf("%d",&arr);
        num[arr]++;
    }
    for(i=2;i<=1e7;i++)
    {
        if(!prime[i])
        {
            for(j=1;i*j<=1e7;j++)
            {
                if(j!=1)
                    prime[i*j]=1;
                ans[i]+=num[i*j];
            }
        }
    }
    frp(i,1,1e7+1)
        ans[i]+=ans[i-1];
    scanf("%d",&m);
    while(m--)
    {
        scanf("%lld%lld",&l,&r);
        if(l>1e7)
            pr("0\n");
        else
        {
            r=min(r,(lli)10000000);
            pr("%d\n",ans[r]-ans[l-1]);
        }
    }
    return 0;
}
