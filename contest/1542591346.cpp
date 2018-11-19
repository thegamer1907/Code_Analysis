#include "bits/stdc++.h"

using namespace std;

#define ll long long int
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define NFOR(i,a,b) for(ll i=a;i>b;i--)
#define sz(a) int((a).size())
#define all(c) c.begin(),c.end()
#define find(c, x) (c.find(x)!=c.end())
#define tr(c,i) for(typeof((c).begin() i=(c).begin();i!=(c).end();i++)
#define pb push_back
#define mp make_pair
#define boost ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define MOD 1000000007
#define MAX 200005

int main(){
    boost;
    string s;
    cin>>s;
    ll n;
    cin>>n;
    bool b=false;
    ll a=0,c=0;
    while(n--){
        ll cnt=0;
        string s1;
        cin>>s1;
        if(s==s1) { b=true; break;}
        if(s1[0]==s[1]) a=1;
        if(s1[1]==s[0]) c=1;
        
    }
    
    if((a and c) or b) cout<<"YES";
    else cout<<"NO";
    return 0;
}