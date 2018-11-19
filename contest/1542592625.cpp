#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define mp make_pair
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define endl '\n'
#define pii pair<int,int>
#define all(v) v.begin(),v.end()
#define test(t) int t;cin>>t;while(t--)
ll poww(ll x,ll y) {ll res=1;x%=mod; assert(y>=0); for(;y;y>>=1){if(y&1)res=res*x%mod;x=x*x%mod;}return res;}
using namespace std;

int main(){

    fast;
    //freopen("input.txt", "r+", stdin);
	//freopen("output.txt", "w+", stdout);
    string s,ss;
    vector<string > v;
    int i,j,k,n;
    cin>>s;
    cin>>n;
    while(n--){
        cin>>ss;
        if(s==ss){
            cout<<"YES";
            return 0;
        }
        v.pb(ss);
    }
    for(i=0;i<v.size();++i)
        if(v[i][1]==s[0]){
            for(j=0;j<v.size();++j)
            if(v[j][0]==s[1]){
                cout<<"YES";
                return 0;

            }
        }
    cout<<"NO";
    return 0;
}
