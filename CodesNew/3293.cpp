#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
#define N endl
#define MS(a,b) memset(a,b,sizeof(a))
#define S(a) a<<" "
#define F(i,a,b) for(int i=a;i<b;i++)
#define E cout<<"ekhane\n";
#define PB push_back
#define MP make_pair
#define V vector
#define C(a) (int)(a-'0')
#define D(a) (int)(ceil(log10(a))+1)
inline ll gcd(ll a,ll b){while(b){ll x=a%b;a=b;b=x;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
int a[109];
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);
    //freopen("in.txt", "r", stdin);
    int n,m,mx=-1,mn=101,s=0,ansmx,ansmn;
    cin>>n>>m;
    F(i,0,n)cin>>a[i],mx=max(a[i],mx),mn=min(mn,a[i]),s+=a[i];
    int sum=mx*n;
    if(sum>=s+m)ansmn=mx;
    else
    {
        ansmn=((s+m)/n)+((s+m)%n>0);
    }
    cout<<ansmn<<" "<<mx+m;
}
