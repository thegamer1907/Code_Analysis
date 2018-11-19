#include<bits/stdc++.h>
#define REP(i,n) for (int i=0;i<n;i++)
#define FOR(i,a,b) for (int i=a;i<=b;i++)
#define pb push_back
#define mp make_pair
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<int> VI;
typedef pair<int,int> PII;
const ll mod=1000000007;
ll powmod(ll a,ll b) {ll res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
//You magic ;)
int main() {
    ios::sync_with_stdio(false);cin.tie(0);
    string passwrd,s; int n;bool found=false, first=false, second=false ;
    cin>>passwrd;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        if(passwrd==s)found=true;
        if(!found)
        {
            if(passwrd[0]==s[1]) first=true;
            if(passwrd[1]==s[0]) second=true;
            if(first && second) found=true;
        }
    }
    if(found)cout<<"YES"<<"\n"; else cout<<"NO"<<'\n';
    return 0;
}
