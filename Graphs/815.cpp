#include<bits/stdc++.h>
#include<limits>

using namespace std;

#define go ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define ll long long
#define ull unsigned long long
#define ld long double
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define eb emplace_back


#define lop(i,n)             for(i=0 ; i<n  ; i++)
#define loop(i,a,b)          for(i=a ; i<=b ; i++)
#define rlop(i,n)            for(i=n-1 ; i>=0  ; i--)
#define rloop(i,a,b)         for(i=b ; i>=a ; i--)
#define ain(a,n)             for(ll i=0 ; i<n ; i++) cin>>a[i];
#define aout(a,n)            for(ll i=0 ; i<n ; i++) cout<<a[i]<<" ";
#define IN(A, B, C) assert( B <= A && A <= C)


#define PI                 3.1415926535897932384626433832795l
#define mod 1000000007
#define EPS 1e-9
#define deci(n)         cout<<fixed<<showpoint<<setprecision(n);
#define debug(n1) cout << n1 << endl


ll minimum(ll a[],ll n){
    ll mn=INT_MAX,i;
    for(i=1;i<=n;i++) mn = min(mn,a[i]);
    return mn;
}

ll maximum(ll a[],ll n){
    ll mx=INT_MIN,i;
    for(i=1;i<=n;i++) mx = max(mx,a[i]);
    return mx;
}

#define sminimum(s,n)                    *min_element(s.begin(), s.end())
#define smaximum(s,n)                    *max_element(s.begin(), s.end())


typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int,int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;

int main(){
    go;
    ll i,j,cnt=0;
    ll n,t;cin>>n>>t;
    string s;cin>>s;
    while(t--){
        for(i=0;i<s.size()-1;i++){
            if(s[i]=='B' && s[i+1]=='G'){
                swap(s[i],s[i+1]);
                i++;
            }
        }
    }
    cout<<s;
    return 0;
}
