#include <bits/stdc++.h>

        using namespace std;

        /* ---*-----*-----
        ---------o--------
        -----------------*/

        typedef long long ll;
        typedef long double ld;

        typedef vector<ll> vl;

        #define mp make_pair
        #define pb push_back
        #define f first
        #define s second
        #define lb lower_bound
        #define ub upper_bound

        const int MOD = 998244353;
        const int N = 200005;
        const double PI =4*atan(1);
        const ll MAX=9223372036854775807;

        //set<char> vowel={'A', 'O', 'Y','E', 'U', 'I','a','o','e','u','i'};

        int dx[]={1,-1,0,0,1,-1,1,-1};
        int dy[]={0,0,1,-1,1,1,-1,-1};

        ll gcd(ll a, ll b) { return (b == 0 ? a : gcd(b, a % b)); }
        ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }
        bool issquare(ll w ){return trunc(sqrt(w))*trunc(sqrt(w))==w;}
        bool isprime(ll u){for(ll i=2;i<=(int)sqrt(u);i++){if(u%i==0)return 0;}return 1;}
        ll mod(ll to_mod,ll MOD){to_mod%=MOD;while(to_mod<0)to_mod+=MOD;return to_mod%MOD;}
        ll moduloMultiplication(ll a,ll b,ll mod){ll res = 0;a %= mod;while (b){if (b & 1)
            res = (res + a) % mod;a = (2 * a) % mod;b >>= 1;}return res;}
        ll power(ll x, ll y/*,ll p*/){ll res = 1;x = x /*% p*/;
            while (y > 0){if (y & 1)res = (res*x)/* % p*/;y = y>>1;x = (x*x) /*% p*/;}return res;}
        ll _sieve_size;bitset<15000100> bs;vl primes;
        void sieve(ll upperbound) {_sieve_size = upperbound + 1;bs.set();bs[0] = bs[1] = 0;
            for (ll i = 2; i<= _sieve_size; i++) if (bs[i]) {for (ll j = i * i; j <= _sieve_size; j += i) bs[j] = 0;primes.pb(i);} }



        ll n,m,x,y,t,k,z,w,l,r,ans,a;
        bool vis[N];
        ll adj[N];
        
        void dfs(ll src){
            if(vis[src])return;
            vis[src]=1;
            dfs(adj[src]);
        }



        int main(){
            ios::sync_with_stdio(0);
            memset(vis,0,sizeof(vis));
            cin.tie(NULL);
            cin >> n >> t;
            t--;
            for(int i=0;i<n-1;i++){
            	cin >> x;
                adj[i]=i+x;
            }
            dfs(0);
            if(vis[t]){
                cout <<"YES";
            }else{
                cout << "NO";
            }
            





            return 0;
        }
