//part of the template has been attributed from striver_79
//sample solution
//https://www.codechef.com/viewsolution/20526929 

/* Look for:
* the exact constraints (multiple sets are too slow for n=10^6 :( ) 
* special cases (n=1?)
* overflow (ll vs int?)
* array bounds
* if you have no idea just guess the appropriate well-known algo instead of doing nothing :/
*/

// Author:: Subash Singha Roy
// Institution:: Jalpaiguri Government Engineering College

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define mod (int)(1e9+7)
#define fr(i,a,b) for(ll i=a;i<b;i++)
#define frr(i,a,b) for(ll i=a-1;i>=b;i--)
#define tc(t) int t;cin >>t;while(t--)
#define pb(i) push_back(i)
#define rr return 0
#define mp make_pair
#define pr  pair <ll,ll> 
#define ff first
#define ss second
#define inf 999999999999999999
ll mult(ll a,ll b, ll p=mod){return ((a%p)*(b%p))%p;}
ll add(ll a, ll b, ll p=mod){return (a%p + b%p)%p;}
ll fpow(ll n, ll k, ll p = mod) {ll r = 1; for (; k; k >>= 1) {if (k & 1) r = r * n%p; n = n * n%p;} return r;}
ll inv(ll a, ll p = mod) {return fpow(a, p - 2, p);}
bool sa(const pair<int,int> &a,const pair<int,int> &b){return (a.second<b.second);}
bool fd(const pair<int,int> &a,const pair<int,int> &b){return (a.first>b.first);}
bool sd(const pair<int,int> &a,const pair<int,int> &b){return (a.second>b.second);}


int main(){
fio
ll n,ab=0,ba=0,ab1=0,ba1=0,ind=-1,ind1=-1;
string s;
cin>>s;
n=s.length();
fr(i,0,n-1){
    if(s[i]=='A' && s[i+1]=='B'){
    ab++;
    ind=i+1;
    ind1=i;
    break;
    }
   
}
fr(i,0,n-1){
    if(s[i]=='B' && s[i+1]=='A' && i!=ind && ind1!=i+1){
    ba++;
    break;}
}

fr(i,0,n-1){
    if(s[i]=='B' && s[i+1]=='A'){
    ba1++;
    ind=i;
    ind1=i+1;
    break;
    }
   
}
fr(i,0,n-1){
    if(s[i]=='A' && s[i+1]=='B' && (i+1)!=ind && i!=ind1){
    ab1++;
    break;}
}


if((ab>=1 && ba>=1)|| (ab1==1 && ba1==1))
cout<<"YES";
else
cout<<"NO";

//cout<<ab<<ba<<ab1<<ba1;
rr;}
