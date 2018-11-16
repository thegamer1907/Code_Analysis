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

    #define mp make_pair
    #define pb push_back
    #define f first
    #define s second
    #define lb lower_bound
    #define ub upper_bound

    const int MOD = 1000000007;
    const int N = 100000;
    set<char> vowel={'A', 'O', 'Y', 'E', 'U', 'I','a','o','y','e','u','i'};
    ll gcd(ll a, ll b) { return (b == 0 ? a : gcd(b, a % b)); }

    int n,m,k,l,p,q=0,ans=1,res=1,posmin,posmax,x,y,z;
    string ch,ch1,ch2;
    int tab[N];
    map<int,vi> adj;
    map<pair<int,int> ,int> mapai;
    set<int> si;
    set<char> sc;
    map<char,int> mc;
    vl v,vv;

    /*void dp(string sh){
        if(sh[0]==sh[1])tab[0]++;
        for(int i=1;i<sh.size()-1;i++){
            if(sh[i]==sh[i-1])tab[i]=tab[i-1]+1;
            else tab[i]=tab[i-1];
        }
    }*/



    int main(){
        ios_base::sync_with_stdio(false);
        //freopen("overcode.in", "r", stdin);
        //memset(tab,0,sizeof(tab));
        //memset(dist,0,sizeof(dist));
        //memset(pred,-1,sizeof(tab));
        //memset(dist,0,sizeof(dist));
        cin >> n;
        cin >>p;
        for(int i=0;i<n-1;i++){
            cin >> x;
            if(x>p)res++;
            else{res=1;}
            ans=max(ans,res);
            p=x;
        }
        cout << ans;
        return 0;
    }
