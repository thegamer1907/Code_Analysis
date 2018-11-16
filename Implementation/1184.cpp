#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define f(s,i,e) for(i=s;i<e;i++)
#define fi(s,i,e) for(i=s;i<e;i++)
#define fe(s,i,e) for(i=s;i<=e;i++)
#define rf(e,i,s) for(i=e;i>=s;i--)
#define all(c) c.begin(), c.end()
#define sz(a) ll((a).size())
#define pb push_back
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef pair<ll,ll> ii;
typedef vector<ii> pi;

bool cmp(ii a,ii b) {
    return a.first <= b.first;
}

void solve() {
    ll n,i,j,t;
    cin>>n>>t;
    string s;
    cin>>s;
    f(0,i,t) {
        f(01,j,n) {
            if(s[j] == 'G') {
                swap(s[j],s[j-1]);
                j++;
            }
        }    
    }
    cout<<s;
}
 
int main() {
    int t,i;
        solve();
    // cin>>t;
    // f(0,i,t) {
    // }
    return 0;
} 