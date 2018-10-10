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
        const int N = 100005;
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
        ll n,m,a=0,b,res=0,k,r,l;


        int main(){
            //ios_base::sync_with_stdio(false);
            scanf("%lld%lld",&n,&m);
            ll tab[2][m];
            ll prev[m];
            ll ans[n];
            for(int i=0;i<m;i++){
                tab[0][i]=0;
                prev[i]=0;
            }
            for(int i=0;i<n;i++){
            	ans[i]=0;
            }
            for(int i=1;i<=n;i++){
                    ll pos=i&1;
                for(int j=0;j<m;j++){
                    scanf("%lld",&a);
                    if(a>=prev[j])tab[pos][j]=tab[pos^1][j]+1;
                    else tab[pos][j]=1;
                    prev[j]=a;
                    //cout << tab[pos][j] << endl;
                    ans[i-1]=max(ans[i-1],tab[pos][j]);
                }
            }
           /* for(int i=0;i<n;i++){
            	cout <<ans[i] << endl;
            }*/
            scanf("%lld",&k);
            while(k--){
                scanf("%lld%lld",&l,&r);
                ///cout << "lol"<< endl;
                l--;r--;
                if(ans[r]>=(r-l+1))printf("Yes\n");
                else printf("No\n");
            }
            
            
            return 0;
        }
