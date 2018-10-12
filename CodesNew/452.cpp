#include<bits/stdc++.h>
///...................................*****.................................................///
///        Author :  MD. Rakibul Islam ( mmdrakibul2912@gmail.com )                         ///
///                  Department of Computer Science                                         ///
///                  & Engineering,                                                         ///
///                  Comilla University , Bangladesh.                                       ///
///...................................*****.................................................///
#define SQR(n) (n*n)
#define CHR getchar()
#define NL printf("\n")
#define PI 2.0*acos(0.0)
#define ll              long long int
#define ull             unsigned long long int
#define sc              scanf
#define gcd(a,b)        __gcd(a,b)
#define lcm(a,b)        ((a)*(b))/gcd(a,b)
#define pf              printf
#define MOD             1000000007
#define mx              123456789
#define Max(a,b) ((a>b)?a:b)
#define Min(a,b) ((a<b)?a:b)
#define ff first
#define D double
#define sz size()
#define ss second
#define PB push_back
#define MP make_pair
#define all(a) a.begin(),a.end()
using namespace std;
ll a[100009], c[100009];
ll bin(ll BEG,ll END,ll ITEM)
{
    ll MID,res=0;
    while(BEG<=END)
    {
        MID=(BEG+END)/2;
        if(c[MID] == ITEM)
        {
            res=MID;
            break;
        }
        else if(c[MID] > ITEM)
        {
            END = MID-1;
        }
        else
        {
            BEG = MID+1;
            res = MID;
        }
    }
    return res;
}
int main()
{
    ll n, m, i, j, k, l=0;
    cin>>n>>m;
    c[0]=0;
    a[0]=0;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        c[i]=c[i-1]+a[i];
    }
    ll x, cnt=0;
    for(i=1;i<=n;i++)
    {
        k=m+c[i-1];
        x=bin(i,n,k);
        if(x==1 && i==1)
            cnt=1;
        else
            cnt=x-i+1;
        l=max(l,cnt);
    }
    cout<<l<<endl;
    return 0;
}
