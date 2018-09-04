        #include <bits/stdc++.h>

        using namespace std;

        /* ---*-----*-----
        ---------o--------
        -----------------*/

        typedef long long ll;
        typedef long double ld;

        typedef pair<int, int> pi;
        typedef pair<ll,ll> pl;
        typedef pair<ld,ld> pd;

        typedef vector<int> vi;
        typedef vector<ld> vd;
        typedef vector<ll> vl;
        typedef vector<pi> vpi;
        typedef vector<pl> vpl;
        typedef vector<char> vc;

        typedef map<int,int> mii;
        typedef map<ll,ll> mll;
        typedef map<char,int> mci;
        typedef map<string,int> msi;

        #define mp make_pair
        #define pb push_back
        #define f first
        #define s second
        #define lb lower_bound
        #define ub upper_bound

        const int MOD = 998244353;
        const int N = 2005;
        set<char> vowel={'A', 'O', 'Y', 'E', 'U', 'I','a','o','y','e','u','i'};
        ll gcd(ll a, ll b) { return (b == 0 ? a : gcd(b, a % b)); }
        ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }
        bool issquare(ll w ){
            return trunc(sqrt(w))*trunc(sqrt(w))==w;
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

        ll n,m,k,a,l,r,b,t,ans=0,res=0,posmin,posmax,x,y,z,V,www,eee,w,e,xmax=0,ymax=0;
        vl vv,v;
        double db;
        vector<string> vs;
        vector<pl> vvv,sss;
        map<ll,vl> adj,adj1;
        char c;
        bool check=true;
        map<ll ,ll> maa;
        map<string,ll>  ma;
        string ch,ch1,ch2;
        stack<ll> ss;

        
        int main(){
            ios_base::sync_with_stdio(false);
            //freopen("overcode.in", "r", stdin);
            cin >>n>> k;
            cin >> ch;
            ll j=0;
            a=0;b=0;
            ans=0;
            for(int i=0;i<n;i++){
                if(ch[i]=='a')a++;
                else b++;
                while(a>k && b>k){
                    if(ch[j]=='a')a--;
                    if(ch[j]=='b')b--;
                    j++;
                }
                ans=max(ans,i-j+1);
            }
            cout << ans;
            
        return 0;
        }

