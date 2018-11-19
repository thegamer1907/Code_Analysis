#include<bits/stdc++.h>
using namespace std;

#define f first
#define s second
#define p pair<int,int>
#define P pair<ll,ll>
#define pb push_back
#define ll long long
#define ull unsigned long long
#define db double
#define zero(a) memset(a,0,sizeof(a))
#define inff(a,n) fill(a,a+n+1,inf)
#define all(a) a.begin(),a.end()
#define sz(a) int((a).size())
#define read(x) scanf("%d",&x)
#define read2(x,y) scanf("%d%d",&x,&y)
#define write(x) printf("%d\n",x)
#define lson p*2,l,mid
#define rson p*2+1,mid+1,r

const int maxn=1e5+10;
const int inf=1e9;
const int base1=31,base2=127;

int n,m,a[maxn][10],b[maxn],ok,flag1,sum1,sum2,sum,vis[maxn],flag;
string s1,s2,s,t;

int power(int n)
{
    int i=2,j=1;
    if(n==0)i=1;
    for(;j<n;j++)i=2*i;
    return i;
}

int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=k; j++)
        {
            scanf("%d",&a[i][j]);
        }
        sum=0;
        for(int j=1,t=k-1;j<=k&&t>=0;j++,t--)
        {
            sum+=(a[i][j])*power(t);
        }
        vis[sum]=1;
    }
    if(k==1)
    {
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                if((i&j)==0&&vis[i]&&vis[j])flag=1;
            }
        }
        if(flag)cout<<"YES";
        else cout<<"NO";
    }
    if(k==2)
    {
        for(int i=0; i<4; i++)
        {
            for(int j=0; j<4; j++)
            {
                if((i&j)==0&&vis[i]&&vis[j])flag=1;
            }
        }
        if(flag)cout<<"YES";
        else cout<<"NO";
    }
    if(k==3)
    {
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                if((i&j)==0&&vis[i]&&vis[j])flag=1;
            }
        }
        if(flag)cout<<"YES";
        else cout<<"NO";
    }
    if(k==4)
    {
        for(int i=0; i<16; i++)
        {
            for(int j=0; j<16; j++)
            {
                if((i&j)==0&&vis[i]&&vis[j])flag=1;
            }
        }
        if(flag)cout<<"YES";
        else cout<<"NO";
    }
    return 0;
}