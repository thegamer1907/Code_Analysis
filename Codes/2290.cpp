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

         ll tab[664580];
        ll tab1[10000002];

        ll _sieve_size;bitset<10000009> bs;vl primes;
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
           for(int i=0;i<z;i++){
            maa[primes[i]]=i;
           }
           cin >> n;
           for(int i=0;i<n;i++){
           	cin >> x;
           	tab1[x]++;;
           }
           sieve(10000000);
           z=primes.size();
           
           for(int i=0;i<664580;i++){
           	if(i==0)continue;
           	tab[i]+=tab[i-1];
           }
           cin >> t;
           while(t--){
           	cin >> x >> y;
           	ll i=find(x);
           	ll j=find1(y);
           	ans=( (j>=0&& i<z)?tab[j]:0) -((i>=0&& i<z)?tab[i]:0);
           	cout << ans<<"\n";
           }
           
            return 0;
        }

