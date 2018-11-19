#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>


using namespace std;
using namespace __gnu_pbds;

#define rep(i,a,n) for (int i=(a);i<(n);i++)
#define per(i,a,n) for (int i=(n)-1;i>=(a);i--)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define SZ(x) (int)x.size()

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;
typedef pair<ll,ll>pll;
typedef vector<pii> vpii;

template<typename T>
T getint() {
    T x=0,p=1;
    char ch;
    do{ch=getchar();}while(ch <= ' ');
    if(ch=='-')p=-1,ch=getchar();
    while(ch>='0'&&ch<='9')x=x*10+ch-'0',ch=getchar();
    return x*p;
}

mt19937 gen(chrono::system_clock::now().time_since_epoch().count());

template<typename T1,typename T2>bool umin(T1 &x,const T2&y){if(x>y)return x=y,true;return false;}
template<typename T1,typename T2>bool umax(T1 &x,const T2&y){if(x<y)return x=y,true;return false;}

const int maxn=(int)1e5+10;
const int inf=(int)1e9+5;
const int mod=(int)1e9+7;
const ll llinf=(ll)2e18+5;
const ld pi=acos(-1.0);

int main() {
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    string s;
    cin>>s;
    vector<string>a;
    int n;
    cin >>n;
    a.resize(n);
    rep(i,0,n)cin>>a[i];
    rep(i,0,n)if(s==a[i])return cout<<"YES",0;
    rep(i,0,n)rep(j,0,n)if(a[i][1]==s[0]&&a[j][0]==s[1]){
        cout<<"YES\n";
        return 0;
    }
    cout<<"NO\n";

    return 0;
}
