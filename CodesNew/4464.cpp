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
#define N 1000001
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

    ll n,rem=0,i,j,len1,len2,mv,c=0;
    cin>>n;

    string s[n];
    string s1[n];

    fr(i,0,n-1)
    cin>>s[i];
    len2=s[n-1].size()-1;
    s1[n-1]=s[n-1];
    frn(i,n-2,0)
    {
        len1=s[i].size()-1;

        mv=min(len1,len2);
        c=0;
        fr(j,0,mv)
        {
            if(s[i][j]>s[i+1][j])
                break;
            else if(s[i][j]<s[i+1][j])
            {
                c=1;
                break;
            }
            s1[i].pb(s[i][j]);
        }
        if(c==1)
        {
            for(;j<=len1;j++)
                s1[i].pb(s[i][j]);
        }
        else if(j<=mv)
        {
            len1=j-1;
        }
        else
            len1=mv;
        len2=len1;

    }

    fr(i,0,n-1)
    cout<<s1[i]<<endl;

}
