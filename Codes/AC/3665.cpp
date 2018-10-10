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

        const int MOD = 1000000007;
        const int N = 100005;
        const double PI =4*atan(1);

        set<char> vowel={'A', 'O', 'Y', 'E', 'U', 'I','a','o','y','e','u','i'};

        int dx[]={1,-1,0,0,1,-1,1,-1};
        int dy[]={0,0,1,-1,1,1,-1,-1};

        ll gcd(ll a, ll b) { return (b == 0 ? a : gcd(b, a % b)); }
        ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }
        bool issquare(ll w ){return trunc(sqrt(w))*trunc(sqrt(w))==w;}
        bool isprime(ll u){for(ll i=2;i<=(int)sqrt(u);i++){if(u%i==0)return 0;}return 1;}
        ll mod(ll to_mod,ll modulo=MOD){to_mod%=modulo;while(to_mod<0)to_mod+=modulo;return to_mod%modulo;}
        ll moduloMultiplication(ll a,ll b,ll mod){ll res = 0;a %= mod;while (b){
            if (b & 1)res = (res + a) % mod;a = (2 * a) % mod;b >>= 1;}return res;}
        ll power(ll x, ll y/*,ll p*/){ll res = 1;x = x /*% p*/;
            while (y > 0){if (y & 1)res = (res*x)/* % p*/;y = y>>1;x = (x*x) /*% p*/;}return res;}
       /* ll _sieve_size;bitset<10000009> bs;vl primes;
        void sieve(ll upperbound) {_sieve_size = upperbound + 1;bs.set();bs[0] = bs[1] = 0;
            for (ll i = 2; i<= _sieve_size; i++) if (bs[i]) {for (ll j = i * i; j <= _sieve_size; j += i) bs[j] = 0;primes.pb(i);} }
            */

        ll n,m,k,a,c,l,r,b,t,ans=0,res=0,x,y,z,xmax,xmin;
        vector<ll> vv,v;
        vector<string> vs;
        double db;
        map<ll,vector<ll> > adj;
        //char c;
        map<string,ll > mas;
        queue<pair<ll,ll> > q;
        map<ll,ll> maa;
        string ch,ch1,ch2;
        stack<ll> ss;


        void add(ll v1,ll v2){v1--;v2--;adj[v1].pb(v2);adj[v2].pb(v1);}
        //void addw(ll v1, ll v2 ,ll w){v1--;v2--;adj[v1].pb(mp(v2,w));adj[v2].pb(mp(v1,w)); }
        
        bool possible(ll u){
            ll aa,bb,cc;
            aa=max(u*x-v[0],0ll);
            bb=max(u*y-v[1],0ll);
            cc=max(u*z-v[2],0ll);
            //cout << aa << " " << bb << " " << cc << endl;
            //cout << (n-(aa*a+bb*b+cc*c)>=0) << endl;
            if(n>=(aa*a+bb*b+cc*c))return true;
        	return false;
        }

        int main(){
            ios_base::sync_with_stdio(false);
            cin >> ch;
            for(int i=0;i<ch.size();i++){
                if(ch[i]=='B')x++;
                if(ch[i]=='S')y++;
                if(ch[i]=='C')z++;
            }
            cin >> t;
            v.pb(t);
            cin >> t;
            v.pb(t);
            cin >> t;
            v.pb(t);
            //cout << v[0] <<" " <<v[1]<< " " << v[2]<< " "<<endl;
            cin >> a >> b >> c;
            cin >> n;
            //cout << n << endl;
            l=0;
            r=1e15;
            while(l<r-1){
                ll mid=(l+r)/2;
                //cout << possible[mid] << endl;
                if(possible(mid)==true){
                    l=mid;
                }else r=mid-1;
            }
            if(possible(r))cout << r;
            else cout << l;
            return 0;
        }

