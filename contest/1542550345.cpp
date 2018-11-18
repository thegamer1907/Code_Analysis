#include <bits/stdc++.h>

using namespace std;

#define all(c) (c).begin(),(c).end()
#define sz(c) (int)(c).size()
#define pb push_back
#define sqr(x) ((x) * 1LL * (x))
#define mp make_pair
#define F first
#define S second
#define RI(n) scanf("%d" , &(n))
#define RLL(n) scanf("%lld" , &(n))
#define fast_io ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
 
typedef long long ll;
typedef long double ld;
typedef unsigned int ui;
typedef pair<ll , ll> pll;
typedef pair<int , int> pii;
typedef vector<int> vi;
typedef vector<ll> vl;
const int N = 1e6 , inf = 1e9 , mod = 1e9 + 7;
const ll linf = (ll)1e18 + 7;

int main() {
    string s;
    cin >>s;
    string w;
    ll n , f = 0 , f1 = 0;
    cin >> n;
    for(int i = 1; i <= n; i ++)
    {
        cin >> w;
        if(w[1] == s[0] ){f = 1;}
        if(w[0] == s[1]){f1 = 1;}
        if(s[0] == w[0] && s[1] == w[1]){f1 = 1; f = 1;}
    }
    if(f == 1 && f1 == 1){cout << "YES";}
    else{cout << "NO";}
	return 0;
}