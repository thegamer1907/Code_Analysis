        #include <bits/stdc++.h>

        using namespace std;

        /* ---*-----*-----
        ---------o--------
        -----------------*/

        typedef long long ll;
        typedef long double ld;


        #define mp make_pair
        #define pb push_back
        #define f first
        #define s second
        #define lb lower_bound
        #define ub upper_bound

        const int MOD = 1e8;
        const int N = 100005;
        set<char> vowel={'A', 'O', 'Y', 'E', 'U', 'I','a','o','y','e','u','i'};
        ll gcd(ll a, ll b) { return (b == 0 ? a : gcd(b, a % b)); }
        ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }
        bool issquare(ll w ){
            return trunc(sqrt(w))*trunc(sqrt(w))==w;
        }

        bool isprime(ll u){
            for(ll i=2;i<=(int)sqrt(u);i++){
                if(u%i==0)return 0;
            }
            return 1;
        }
        ll mod(ll to_mod){
            to_mod%=MOD;
            while(to_mod<0)to_mod+=MOD;
            return to_mod%MOD;
        }
       /* int power(ll x, ll y)
{
            int res = 1;      // Initialize result

            x = x ;//% p;  // Update x if it is more than or
                        // equal to p

            while (y > 0)
            {
                // If y is odd, multiply x with result
                if (y & 1)
                    res = (res*x) ;//% p;

                // y must be even now
                y = y>>1; // y = y/2
                x = (x*x) ;//% p;
            }
            return res;
        }*/

        /*ll _sieve_size;
        bitset<10000010> bs;
        vi primes;
        void sieve(ll upperbound) {
        _sieve_size = upperbound + 1;
        bs.set();
        bs[0] = bs[1] = 0;
        for (ll i = 2; i <= _sieve_size; i++) if (bs[i]) {

        for (ll j = i * i; j <= _sieve_size; j += i) bs[j] = 0;
        primes.push_back((int)i);
        } }*/

        int dx[]={1,-1,0,0,1,-1,1,-1};
        int dy[]={0,0,1,-1,1,1,-1,-1};

        ll n,m,k,a,l,r,b,t,ans=0,res=0,x,y,z;
        vector<ll> vv,v;
        double db;
        vector<pair<ll,ll> > vvv,sss;
        map<ll,vector<ll> > adj;
        char c;
        bool check=true;
        map<ll ,ll> maa;
        map<string,ll>  ma;
        string ch,ch1,ch2;
        set<string> ss;


        int main(){
            ios_base::sync_with_stdio(false);
            cin >> n >>m;
            ans=0;
            res=0;
            for(int i=0;i<n;i++){
                cin >> ch;
                ss.insert(ch);
            }
            for(int i=0;i<m;i++){
                cin >> ch;
                if(ss.count(ch))ans++;
            }
            if(n>m)cout<<"YES";
            else if(n<m)cout <<"NO";
            else{
                if(ans%2==0)cout<<"NO";
                else cout<<"YES";
            }
        return 0;
        }

