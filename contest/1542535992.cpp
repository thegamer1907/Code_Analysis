#include<bits/stdc++.h>
typedef long long int ull;
typedef long long int ll;
#define ub upper_bound
#define lb lower_bound
#define pb push_back
#define m_p make_pair
#define int_char_index(a) a-'0'
#define neginf -1000000001
#define inf 1000000000000000001
#define mod 1000000007
#define F first
#define S second
#define fr(j,x,y) for(j=x;j<=y;j++)
#define N 50001
#define frn(i,x,y) for(i=x;i>=y;i--)
using namespace std;
ll power(ll x, ll y){ ll res = 1; x = x % mod;  while (y > 0){ if (y & 1)res = (res*x) % mod; y = y>>1;x = (x*x) % mod;  }return res;}
ll bst(ll a[],ll item,ll index,ll n){ ll b=index,e=n,mid; mid=(b+e)/2; while(a[mid]!=item&&b<=e) { if(a[mid]<item) b=mid+1; else e=mid-1; mid=(b+e)/2; } return mid; }
ll max3(ll x,ll y,ll z){    return max(max(x,y),z);}
ll min3(ll x,ll y,ll z){    return min(min(x,y),z);}
string cir_shift(string s){     string s1;  ll len; len=s.size(); s1=s.substr(1,len-1); s1.pb(s[0]); return s1;}
void swap1(ll &a,ll &b){ll temp;temp=a;a=b;b=temp;}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie();cout.tie();

    string s1,s;
    cin>>s;
    ll n,a=0,b=0;
    cin>>n;
    while(n-->0)
    {
        cin>>s1;
        if(s1[1]==s[0])
            a=1;
        if(s1[0]==s[1])
            b=1;
        if(s==s1)
            a=1,b=1;

    }
    if(a==1&&b==1)
        cout<<"YES";
    else
        cout<<"NO";
}
