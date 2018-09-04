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
        ll power(ll x, ll y/*,ll p*/){ll res = 1;x = x ;/*% p;*/
            while (y > 0){if (y & 1)res = (res*x) ;/*% p;*/y = y>>1;x = (x*x) ;/*% p;*/}return res;}
        /*ll _sieve_size;bitset<1000000010> bs;vi primes;
        void sieve(ll upperbound) {_sieve_size = upperbound + 1;bs.set();bs[0] = bs[1] = 0;
        for (ll i = 2; i<= _sieve_size; i++) if (bs[i]) {for (ll j = i * i; j <= _sieve_size; j += i) bs[j] = 0;} }*/

        ll n,m,k,a,l,r,b,t,ans=0,res=0,x,y,z;
        vector<ll> vv,v;
        double db;
        vector<pair<ll,ll> > vvv;
        map<ll,vector<ll> > adj;
        char c;
        bool check=true;
        map<ll ,ll> maa,maaa;
        map<string,ll>  ma;
        string ch,ch1,ch2;
        unordered_set<ll> ss;
        ll tab[1000005];


        int main(){
            ios_base::sync_with_stdio(false);
            cin >> ch;
            n=ch.size();
            ll left=0;
            ll right=0;
            for(ll k=1;k<n;k++ ){
                if(k>right){
                    right=k;
                    left=k;
                    while(right<n && ch[right]==ch[right-left]){
                        right++;
                        maa[right-left]++;
                    }
                    tab[k]=right-left;
                    right--;
                }else{
                    ll k2=k-left;
                    if(k+tab[k2]-1<right){
                        tab[k]=tab[k2];
                        maa[tab[k]]++;
                    }else{
                        left=k;
                         while(right<n && ch[right]==ch[right-left]){
                        right++;
                        maa[right-left]++;
                    }
                    tab[k]=right-left;
                    right--;
                    }
                }
            }
            ans=0;
            for(int i=n-1;i>=1;i--){
                if(tab[i]+i==n && tab[i]<=n-2 && maa[tab[i]]>=2){
                    ans=max(ans,tab[i]);
                }
            }
            if(ans==0)cout <<"Just a legend";
            else cout << ch.substr(0,ans);
            return 0;
        }

