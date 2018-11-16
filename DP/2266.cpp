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

    int n,m,k,l,p,q=0,ans=0,res=1,posmin,posmax,x,y,z;
    string ch,ch1,ch2;
    int tab[N];
    map<int,vi> adj;
    map<pair<int,int> ,int> mapai;
    set<int> si;
    set<char> sc;
    map<char,int> mc;
    vl v,vv;

    /*int dp(int x,int y){
        if(x==0 || y==0)return 0;
        pi pai={x,y};
        pi pai2={y,x};
        if(mapai.count(pai))return mapai[pai];
        if(mapai.count(pai2))return mapai[pai2];
        int to_return =  1 + max(dp(x-2,y+1),dp(x+1,y-2))
        mapai[pai]=to_return;
        return to_return;
    }*/



    int main(){
        ios_base::sync_with_stdio(false);
        //freopen("overcode.in", "r", stdin);
        memset(tab,0,sizeof(tab));
        //memset(dist,0,sizeof(dist));
        //memset(pred,-1,sizeof(tab));
        //memset(dist,0,sizeof(dist));
        cin >> n >> m;
        for(int i=0;i<n;i++){
           cin >> x;
            v.pb(x);
        }
        for(int i=n-1;i>=0;i--){
            si.insert(v[i]);
            tab[i]=si.size();
        }
        for(int i=0;i<m;i++){
            cin >> x;
            x--;
            cout << tab[x] << endl;
        }
        return 0;
    }
