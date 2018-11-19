
#include <map>
#include <list>
#include <cmath>
#include <ctime>
#include <queue>
#include <stack>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <utility>
#include<bits/stdc++.h>


#define FOR(i,a,b) for(int i=a;i<b;i++)
#define gi(x) scanf("%d",&x)
#define gi2(x,y) scanf("%d%d",&x,&y)
#define gi3(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define giarr(arr,n) FOR(i,0,n) gi(arr[i]);
#define gll(x) scanf("%lld",&x)
#define gll2(x,y) scanf("%lld%lld",&x,&y)
#define gll3(x,y,z) scanf("%lld%lld%lld",&x,&y,&y)
#define gllarr(arr,n) FOR(i,0,n) gll(arr[i]);
#define gd(x) scanf("%lf",&x)
#define gs(x) cin>>s
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define mod 1000000007
#define deb(x) cout<<#x<<" : "<<x<<endl;
#define debug(x,y) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<endl;
#define all(x) x.begin(),x.end()
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define nax 1000010
//#define vi vector<int>
typedef long long ll;
//ll co1,co2;

using namespace std;

int maxarr(vi &arr);
int minarr(vi &arr);
long long modulo(long long base,long long exponent,long long modulus);
long long choose(ll n,ll k);
bool isprime(ll n);
ll inverse(ll a,ll m);
ll fastmult(ll a,ll b,ll c);
vll a(nax);
vll prime;
ll sum[nax];
vector<bool> aprime(nax);
void setprime();
ll divCeil(ll a, ll b);
ll arrceil(vll a,ll k);

//------Deep D. Savani--------
//----DAIICT,Gandhinagar---------

//-----My code starts here--------

int main(){

    string s;
    cin>>s;

    ll n;
    cin>>n;

    bool ans=false;

    vector<string> word;

    FOR(i,0,n)
    {
        string temp;
        cin>>temp;
        word.pb(temp);
        if(temp==s)
            ans=true;
    }

    FOR(i,0,n)
    {
        FOR(j,0,n)
        {
            string comp;
            comp+=word[i][1];
            comp+=word[j][0];
            if(comp==s)
            {
                //deb(comp);
                ans=true;
            }
        }
    }
    if(ans)
        cout<<"Yes";
    else
        cout<<"No";



return 0;
}

//-----My code ends here--------





int maxarr(vi &arr)
{
    int maxi=INT_MIN;
    FOR(i,0,arr.size())  maxi=max(arr[i],maxi);

    return maxi;

}

int minarr(vi &arr)
{
    int mini=INT_MAX;
    FOR(i,0,arr.size()) mini=min(arr[i],mini);
    return mini;
}

long long modulo(long long base,long long exponent,long long modulus)
{
    if(modulus ==1)
        return 0;

    long long result=1;
    base=base % modulus;
    while(exponent>0)
    {
        if(exponent%2==1)
        {
            result=(result*base) % modulus;

        }
        exponent=exponent>>1;
        base = (base*base) % modulus;
    }
    return result;
}

long long choose(ll n,ll k)
{
    if(k==0)  return 1;
    return (n* choose(n-1,k-1))/k;
}

bool isprime(ll n)
{
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

void EE(ll a,ll b,ll &co1,ll &co2)
{
    if(a%b==0)
    {
        co1=0;
        co2=1;
        return;
    }
    EE(b,a%b,co1,co2);
    ll temp=co1;
    co1=co2;
    co2=temp-co2*(a/b);
}

ll inverse(ll a,ll m)
{
    ll x,y;
    EE(a,m,x,y);
    if(x<0) x+=m;
    return x;
}

ll fastmult(ll a,ll b,ll c)
{
    if(b==0)
        return 0;

    long long res=fastmult(a,b>>1,c);
    res=(res+res) % c;
    if(b%2==1)
    {
        res=(res+a)%c;
    }
    return res;
}

void setprime()
{
    aprime[0]=true;

    for(int i=2;i*i<=nax;i++)
    {
       // cout<<"HIII";
        if(aprime[i-1]==false)
        {
           // prime.pb(i);

            for(int j=i*2;j<=nax;j+=i)
            {
                aprime[j-1]=true;
            }
        }
    }
}
ll divCeil(ll a, ll b) { return (a + b - 1) / b; }

ll arrceil(vll a,ll k)
{
    ll n=a.size();
    ll low=0;
    ll high=n-1;

    if(a[0]>k)
        return -1;
    while(low<high)

    {
       // debug(low,high);
        ll mid=(low+high+1)/2;
        if(a[mid]<=k)
            low=mid;
        else
            high=mid-1;
    }
    return low;
}



