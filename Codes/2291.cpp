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
         ll tab[664580];
        ll tab1[10000002];

        ll gcd(ll a, ll b) { return (b == 0 ? a : gcd(b, a % b)); }
        ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }
        bool issquare(ll w ){return trunc(sqrt(w))*trunc(sqrt(w))==w;}
        bool isprime(ll u){for(ll i=2;i<=(int)sqrt(u);i++){if(u%i==0)return 0;}return 1;}
        ll mod(ll to_mod,ll modulo=MOD){to_mod%=modulo;while(to_mod<0)to_mod+=modulo;return to_mod%modulo;}
        ll moduloMultiplication(ll a,ll b,ll mod){ll res = 0;a %= mod;while (b){
            if (b & 1)res = (res + a) % mod;a = (2 * a) % mod;b >>= 1;}return res;}
        ll power(ll x, ll y/*,ll p*/){ll res = 1;x = x /*% p*/;
            while (y > 0){if (y & 1)res = (res*x)/* % p*/;y = y>>1;x = (x*x) /*% p*/;}return res;}
        ll _sieve_size;bitset<10000009> bs;vl primes;
        //bitset<10000009> bs1;
        void sieve(ll upperbound) {_sieve_size = upperbound + 1;bs.set();bs[0] = bs[1] = 0;
        	ll com =-1;
            for (ll i = 2; i<= _sieve_size; i++) if (bs[i]) {primes.pb(i);com++;for (ll j = i ; j <= _sieve_size; j += i) {
            	bs[j] = 0;
            	tab[com]+=tab1[j];
            }
            ;} ;}


        ll n,m,k,a,l,r,b,t,ans=0,res=0,x,y,z,xmax,xmin;
        vector<ll> vv,v;
        vector<vl > troll;
        double db;
        vector<pair<ll,ll> > vvv;
        priority_queue<pair<ll,ll> > pq;
        map<ll,vector<ll> > adj;
        char c;
        map<string,ll > points;
        queue<pair<ll,ll> > q;
        map<ll,ll> maa;
        string ch,ch1,ch2;
        stack<ll> ss;
        map<ll,ll> vis;


        void add(ll v1,ll v2){v1--;v2--;adj[v1].pb(v2);adj[v2].pb(v1);}
        //void addw(ll v1, ll v2 ,ll w){v1--;v2--;adj[v1].pb(mp(v2,w));adj[v2].pb(mp(v1,w)); }
        
      /*  void primeFactors(ll N) { // remember: vi is vector<int>, ll is long long
        	if(bs[N]){
        		tab[maa[N]]++; 
        		return;
        	}
			ll PF_idx = 0, PF = primes[PF_idx]; // primes has been populated by sieve
			while (PF * PF <= N) { // stop at sqrt(N); N can get smaller
			if(N%PF==0){
				tab[maa[PF]]++;
			while (N % PF == 0) { N /= PF;  }
			}// remove PF
			PF = primes[++PF_idx]; // only consider primes!
			}
			if (N != 1) tab[maa[N]]++; 
        }*/
        
        
        ll find(ll pos){
        	if(primes[0]>pos)return -1;
        	if(primes[z-1]<pos)return z;
        	ll i=0;
        	ll j=z-1;
        	while(i!=j-1){
        		ll mid=(i+j)/2;
        		if(primes[mid]>pos){
        			j=mid;
        		}else i=mid;
        	}
        	if(primes[i]==pos)return i-1;
        	else return i;
        }
        
        ll find1(ll pos){
        	if(primes[0]>pos)return -1;
        	if(primes[z-1]<pos)return z;
        	ll i=0;
        	ll j=z-1;
        	while(i!=j-1){
        		ll mid=(i+j)/2;
        		if(primes[mid]>pos){
        			j=mid;
        		}else i=mid;
        	}
        	if(primes[j]==pos)return j;
        	else return i;
        }

        int main(){
            ios_base::sync_with_stdio(false);
            memset(tab,0,sizeof(tab));
            memset(tab1,0,sizeof(tab1));
            //bs1.set();
          // cout << primes.size()<< endl;
           for(int i=0;i<z;i++){
            maa[primes[i]]=i;
           }
           cin >> n;
           for(int i=0;i<n;i++){
           	cin >> x;
           	//v.pb(x);
           	tab1[x]++;;
           	//primeFactors(x);
           }
           sieve(10000000);
           z=primes.size();
           
           for(int i=0;i<664580;i++){
           	if(i==0)continue;
           	tab[i]+=tab[i-1];
           }
           cin >> t;
           //cout << tab[2] << endl;
           while(t--){
           	cin >> x >> y;
           	ll i=find(x);
           	ll j=find1(y);
           	//cout << i << " " << j << endl;
           	ans=( (j>=0&& i<z)?tab[j]:0) -((i>=0&& i<z)?tab[i]:0);
           	cout << ans<<"\n";
           }
           
            return 0;
        }

