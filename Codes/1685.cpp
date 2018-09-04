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

        const int MOD = 1e8;
        const int N = 100005;
        const double PI =4*atan(1);

        set<char> vowel={'A', 'O', 'Y', 'E', 'U', 'I','a','o','y','e','u','i'};

        int dx[]={1,-1,0,0,1,-1,1,-1};
        int dy[]={0,0,1,-1,1,1,-1,-1};

        ll gcd(ll a, ll b) { return (b == 0 ? a : gcd(b, a % b)); }
        ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }
        bool issquare(ll w ){return trunc(sqrt(w))*trunc(sqrt(w))==w;}
        bool isprime(ll u){for(ll i=2;i<=(int)sqrt(u);i++){if(u%i==0)return 0;}return 1;}
        ll mod(ll to_mod){to_mod%=MOD;while(to_mod<0)to_mod+=MOD;return to_mod%MOD;}
        ll power(ll x, ll y/*,ll p*/){ll res = 1;x = x /*% p*/;
            while (y > 0){if (y & 1)res = (res*x)/* % p*/;y = y>>1;x = (x*x) /*% p*/;}return res;}
        /*ll _sieve_size;bitset<5000005> bs;vl primes;
        void sieve(ll upperbound) {_sieve_size = upperbound + 1;bs.set();bs[0] = bs[1] = 0;
            for (ll i = 2; i<= _sieve_size; i++) if (bs[i]) {for (ll j = i * i; j <= _sieve_size; j += i) bs[j] = 0;primes.pb(i);} }
        */
        ll n,m,k,a,l,r,b,t,ans=0,res=0,x,y,z,xmax,xmin;
        vector<ll> vv,v,troll;
        double db;
        vector<pair<ll,ll> > vvv;
        priority_queue<pair<ll,ll> > pq;
        map<ll,vector<ll> > adj;
        char c;
        map<ll,ll> maa;
        string ch,ch1,ch2;
        unordered_set<string> ss;
        
        bool ok(ll u){
	ll to_return=0;
            for(ll i=0;i<n;i++){
                to_return+=min((u-1)/(i+1),m);
            }
            //if(u==5)cout << to_return<<endl;
            if(to_return<k )return 0;
            else return 1;
        }

        int main(){
            ios_base::sync_with_stdio(false);
            cin >> n >> m >> k;
            ll left=1;
            ll right=n*m+1;
            while(left<right){
                ll mid=(right+left)/2;
                //cout << mid << endl;
                //cout << (mid%m+1)*(mid/m+1)<<endl;
                bool cond=ok(mid);
                //cout << mid << endl;
                //cout << x << endl;
                if(cond){
                	right=mid;
                }
                else left=mid+1;
            }
            cout << left-1<< endl;
            return 0;
        }

