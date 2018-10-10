#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define pf push_front;
#define fbo find_by_order
#define ook order_of_key
#define lb lower_bound
#define ub upper_bound
#define rep(i,n) for(int i=0;i<n;i++)
#define fo(j,a,b) for(int j=a;j<=b;j++)
#define mem(x,a) memset(x,a,sizeof(x))

typedef long long ll;
typedef double ld;
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
typedef map<ll,ll> spt;
typedef set<ll> si;
typedef multiset<ll>::iterator sit;
typedef map<int,int>::iterator mi;
typedef vector<int>::iterator vit;
typedef vector<ii> vii;
typedef set<ii> sii;
typedef multiset<ll> msi;
typedef vector< vector<ll> > matrix;
typedef tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update> ost;
typedef tree<ii,null_type,less<ii>,rb_tree_tag,tree_order_statistics_node_update> ost1;
template<class T> T chmin(T& a, T& b) { if(a>b) return a; }
template<class T> T chmax(T& a, T& b) { if(a<b) return b; }
const ll INF = 1e18;
const int MOD = 1e8;
const int N = 1e6 + 5  ;
ll modpow(ll a,ll b) {ll res=1;a%=MOD;for(;b;b>>=1){if(b&1)res=res*a%MOD;a=a*a%MOD;}return res;}

ll b[N];
void kmpPreprocess(string s) { 
int i = 0, j = -1; b[0] = -1; 
while (i < s.length()) { 
while (j >= 0 && s[i] != s[j]) j = b[j]; 
i++; j++; 
b[i] = j; 
} }
int main()
{
    string s;
    cin>>s;
    kmpPreprocess(s);
    int n=s.length();
    ll mx=b[n],f=0;
    for(int i=0;i<n-1;i++){
        if(b[i]==mx && b[i]>0)
        {
            f=1;
            break;
        }
        //cout<<b[i]<<" ";
    }
    //cout<<mx;
    if(f==0){
        int k=b[b[n]];
        if(k<=0 ||mx==0)
        cout<<"Just a legend";
        else
        for(int i=0;i<k;i++)
            cout<<s[i];
    }
    else
    {
        for(int i=0;i<mx;i++)
            cout<<s[i];
    }
}

