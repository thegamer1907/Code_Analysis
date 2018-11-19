#include <bits/stdc++.h>
#include<stdlib.h>
using namespace std;

typedef long long int ll;
typedef long double ld;

#define rep(i,a,b) for(ll i=a;i<=b;++i)
#define rev(i,a,b) for(ll i=a;i>=b;i--)
#define pll pair<ll,ll>
#define vll vector<ll>
#define sll set<ll>
#define vpll vector<pll>
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define ln length()
#define M 1000000007
string pass,s[111];
ll n;
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);
    cin>>pass>>n;
    rep(i,1,n) {
        cin>>s[i];
        if(s[i] == pass){
            cout<<"YES\n";
            return 0;
        }
    }
    rep(i,1,n) rep(j,1,n){
        string cc;
        cc+=s[i][1];
        cc+=s[j][0];
        if(cc == pass){
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
}
