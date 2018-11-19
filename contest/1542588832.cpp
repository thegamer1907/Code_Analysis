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

const int maxn=1e6+10;
const int inf=1e9;
const int base1=31,base2=127;

int n,m,a[maxn],b[maxn],ok,flag,ans,sum1,sum2,sum,flag1,flag2;
string s1,s2,s[500],t;

int main()
{
    cin>>t;
    cin>>n;
    for(int i=0;i<n;i++)cin>>s[i];
    for(int i=0;i<n;i++)
    {
        if(s[i][1]==t[0])flag1=1;
        if(s[i][0]==t[1])flag2=1;
        if(s[i]==t)flag=1;
    }
    if(flag1&&flag2)cout<<"YES";
    else if(flag)cout<<"YES";
    else cout<<"NO";
    return 0;
}