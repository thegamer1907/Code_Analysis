#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define MOD 1000000007
#define MOD9 1000000009
#define gc getchar_unlocked
#define ms(s, n) memset(s, n, sizeof(s))
#define prec(n) fixed<<setprecision(n)
#define eps 0.000001
#define all(v) v.begin(), v.end()
#define bolt ios::sync_with_stdio(0)
typedef long long ll;
using namespace std;
ll mult(ll a,ll b, ll p=MOD){return ((a%p)*(b%p))%p;}
ll add(ll a, ll b, ll p=MOD){return (a%p + b%p)%p;}
ll fpow(ll n, ll k, ll p = MOD) {ll r = 1; for (; k; k >>= 1) {if (k & 1) r = r * n%p; n = n * n%p;} return r;}
ll inv(ll a, ll p = MOD) {return fpow(a, p - 2, p);}

int main(){
    bolt;
    ll n;
    string s;
    cin>>s;
    cin>>n;
    map<char,ll>m1,m2;
    string temp=s;
    ll flag=0;
    reverse(all(temp));
    for(ll i=0;i<n;i++){
        string p;
        cin>>p;
        if(p==s || temp==p){
            flag=1;
        }
        m1[p[0]]=1;
        m2[p[1]]=1;
    }
    if(m1[s[1]]==1 && m2[s[0]]==1 || flag==1){
        cout<<"YES\n";
    }else cout<<"NO\n";
}
