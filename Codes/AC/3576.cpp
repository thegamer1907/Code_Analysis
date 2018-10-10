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

        //set<char> vowel={'A', 'O', 'Y', 'E', 'U', 'I','a','o','e','u','i'};

        int dx[]={1,-1,0,0,1,-1,1,-1};
        int dy[]={0,0,1,-1,1,1,-1,-1};

        ll gcd(ll a, ll b) { return (b == 0 ? a : gcd(b, a % b)); }
        ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }
        bool issquare(ll w ){return trunc(sqrt(w))*trunc(sqrt(w))==w;}
        bool isprime(ll u){for(ll i=2;i<=(int)sqrt(u);i++){if(u%i==0)return 0;}return 1;}
        ll mod(ll to_mod){to_mod%=MOD;while(to_mod<0)to_mod+=MOD;return to_mod%MOD;}
        ll moduloMultiplication(ll a,ll b,ll mod){ll res = 0;a %= mod;while (b){if (b & 1)
            res = (res + a) % mod;a = (2 * a) % mod;b >>= 1;}return res;}
        ll power(ll x, ll y/*,ll p*/){ll res = 1;x = x /*% p*/;
            while (y > 0){if (y & 1)res = (res*x)/* % p*/;y = y>>1;x = (x*x) /*% p*/;}return res;}
     /*   ll _sieve_size;bitset<1000010> bs;vl primes;
        void sieve(ll upperbound) {_sieve_size = upperbound + 1;bs.set();bs[0] = bs[1] = 0;
            for (ll i = 2; i<= _sieve_size; i++) if (bs[i]) {for (ll j = i * i; j <= _sieve_size; j += i) bs[j] = 0;primes.pb(i);} }
*/
        ll n,m,k,x,ss,y,ans;
        ll a[N],b[N],c[N];
        map<ll,ll> maa;
        set<ll> se;


        int main(){
            ios_base::sync_with_stdio(false);
            cin >> n >> m >> k;
            cin >> x >> ss ;
            for(int i=0;i<m;i++)
            {
                  cin >> a[i];  
            }
            for(int i=0;i<m;i++){
                cin >> b[i];
            }
            for(int i=0;i<k;i++){
                cin >> c[i];
            }
            for(int i=0;i<k;i++){
                cin >> y;
                se.insert(y);
                maa[y]=max(maa[y],c[i]);
            }
            ans=n*x;
            if(maa[ss]>0)ans=min(ans,(n-maa[ss])*x);
            else{
                set<ll> :: iterator it;
                se.insert(ss);
                it=se.find(ss);
                if(it!=se.begin())
                    {
                        it--;
                        y=(*it);
                        it++;
                        se.erase(it);
                        ans=min(ans,(n-maa[y])*x);
                    }
            }
            for(int i=0;i<m;i++){
                if(b[i]<=ss){
                    y=ss-b[i];
                    ans=min(ans,n*a[i]);
                    if(maa[y]>0)ans=min(ans,(n-maa[y])*a[i]);
                    else{
                        set<ll> :: iterator it;
                        se.insert(y);
                        it=se.find(y);
                        if(it!=se.begin())
                            {   
                                ll v;
                                it--;
                                v=(*it);
                                it++;
                                se.erase(it);
                                ans=min(ans,(n-maa[v])*a[i]);
                            }
                    }
                }
            }
            cout << ans;
            
            
            
            return 0;
        }
