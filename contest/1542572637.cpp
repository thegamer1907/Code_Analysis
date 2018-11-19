#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define sz(x) (ll)x.size()
#define foor(x,s,y) for(ll x = s ; x < y ; x++)
#define pb(x) push_back(x);
#define pii pair<int,int>
#define pipii pair<int,pair<int,int>>
#define ppiii pair<pair<int,int>,int>
#define ppiipii pair<pair<int,int>,pair<int,int>>
#define pl pair<ll,ll>
#define plpl pair<ll,pair<ll,ll>>
#define ppl pair<pair<ll,ll>,ll>
#define pplpl pair<pair<ll,ll>,pair<ll,ll>>
#define ff first
#define ss second
#define mod 1000000007LL
#define OOi 1e9
#define OOl 1e18
#define mmst(ar,va) memset(ar , va , sizeof(ar))
#define ndl "\n"

typedef long long ll;
typedef long double ld;
using namespace std;

//const ld PI = acos(-1);
//const int dx[] = {1, -1, 0, 0, 1, 1, -1, -1};
//const int dy[] = {0, 0, 1, -1, 1, -1, 1, -1};

int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    string s , t , tt;
    int b1 = 0 , b2 = 0;
    int n;
    cin>>s>>n;
    while(n--){
        cin>>t;
        if(t==s){
            cout<<"YES";
            return 0;
        }
        if(t[1] == s[0])
            b1++;
        if(t[0] == s[1])
            b2++;
    }

    if(b1&&b2)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
