    #include<bits/stdc++.h>
    using namespace std;
    #include <ext/pb_ds/assoc_container.hpp>
    #include <ext/pb_ds/tree_policy.hpp>
    using namespace __gnu_pbds;
    template <typename T>
    using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;       //set
    //  using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;  // multiset

    static int LOCAL=0;

    #define length(a) (sizeof(a)/sizeof(a[0]))
    #define print(v,i,x) for(int j=i;j<=x;j++){cout<<v[j]<<" ";}cout<<endl;
    #define pb push_back
    #define mp make_pair
    #define lli long long int
    #define ulli unsigned long long int
    #define all(x) x.begin(),x.end()
    #define sz(x) ((int)x.size())
    #define f first
    #define s second

    #define si(x) scanf("%d",&x)
    #define slli(x) scanf("%lld",&x)
    #define si2(x,y) scanf("%d %d",&x,&y)
    #define si3(x,y,z) scanf("%d %d %d",&x,&y,&z)
    #define slli2(x,y) scanf("%lld %lld",&x,&y)
    #define slli3(x,y,z) scanf("%lld %lld %lld",&x,&y,&z)

    #define pi(x) printf("%d",x)
    #define pi2(x,y) printf("%d %d",x,y)
    #define pi3(x,y,z) printf("%d %d %d",x,y,z)
    #define pli(x) printf("%ld",x)
    #define plli(x) printf("%lld",x)
    #define plli2(x,y) printf("%lld %lld",x,y)
    #define plli3(x,y,z) printf("%lld %lld %lld",x,y,z)
    #define pn printf("\n")
    #define ps printf(" ")
    #define pc(c) printf("%c",c)
    #define pstr(s) printf("%s",s)

    #define FOR(i,x,n) for(int i=x;i<=n;i++)
    #define FORl(i,x,n) for(lli i=x;i<=n;i++)
    #define ROF(i,x,n) for(int i=x;i>=n;i--)
    #define ROFl(i,x,n) for(lli i=x;i>=n;i--)

    #define debug(x) cout << "  - " << #x << ": " << x << endl;
    #define debugs(x, y) cout << "  - " << #x << ": " << x << "         " << #y << ": " << y << endl;
    #define debugss(x, y, z) cout << "  - " << #x << ": " << x << "         " << #y << ": " << y << "         " << #z << ": " << z <<  endl;
    #define fastIO 	std::ios::sync_with_stdio(false);cin.tie(NULL);
    #define cut cout<<"------------------------------------------\n";
    #define cut1 cout<<"******************************************\n";

    typedef vector<int> vi;
    typedef vector<long long> vlli;
    typedef vector<string> vstr;

    typedef pair<int,int> prii;
    typedef pair<int,lli> prilli;
    typedef pair<lli,int> prllii;
    typedef pair<lli,lli> prllilli;

    const lli mod = 1000000007ll;
    const lli MOD = 1000000009ll;
    const lli INF = LLONG_MAX/10;
    const int inf = INT_MAX/2;

    lli count_bit(lli _x){lli _ret=0;while(_x){if(_x%2==1)_ret++;_x/=2;}return _ret;}
    bool check_bit(lli _mask,lli _i){lli x=1;return (_mask&(x<<_i))==0?false:true;}
    lli set_bit(lli _mask,lli _i){lli x=1;_mask=_mask|(x<<_i);return _mask;}
    lli msb(lli _mask){lli ret=-1;int cnt=0;while(_mask){if(_mask&1)ret=cnt;_mask/=2;cnt++;}return ret;}
    lli powermod(lli _a,lli _b,lli _m=mod){lli _r=1;while(_b){if(_b%2==1)_r=(_r*_a)%_m;_b/=2;_a=(_a*_a)%_m;}return _r;}
    lli power(lli _a,lli _b){lli _r=1;while(_b){if(_b%2==1)_r=(_r*_a);_b/=2;_a=(_a*_a);}return _r;}
    lli add(lli a,lli b,lli m=mod){lli x=a+b;while(x>=m)x-=m;return x;}
    lli sub(lli a,lli b,lli m=mod){lli x=a-b;while(x<0)x+=m;return x;}
    lli mul(lli a,lli b,lli m=mod){lli x=a*b;x%=m;return x;}
    lli gcd(lli a,lli b){while(a&&b)a>b?a%=b:b%=a;return a+b;}
    lli lcm(lli a,lli b){return (max(a,b)/gcd(a,b))*min(a,b);}

    struct pair_hash {
        std::size_t operator () (const std::pair<lli,lli> &p) const {
            auto h1 = std::hash<lli>{}(p.first);
            auto h2 = std::hash<lli>{}(p.second);
            return h1 ^ h2;
        }
    };

    struct cmp{
        bool operator()(prii const & l,prii const & r){
           return l.s<r.s;
        }
    }myobject;

    unordered_set<int> s;
    unordered_map<int,int> m;
    int n,k,x;

    bool check(int mask){
        int b=0,tot=0;
        int cnt[]={0,0,0,0};
        while(mask){
            if(mask&1 && s.find(b)!=s.end()){
                tot++;
                int x=b,y=0;
                while(x){
                    if(x&1)
                    cnt[y]++;
                    y++;
                    x>>=1;
                }
            }
            mask>>=1;
            b++;
        }
        if(cnt[0]*2<=tot && cnt[1]*2<=tot && cnt[2]*2<=tot && cnt[3]*2<=tot && tot>0)
            return true;
        else
            return false;
    }

    int main()
    {

        LOCAL=0;
        if(LOCAL){
            freopen("C:\\Users\\Smit Patel\\Downloads\\D-large.in","r",stdin);
            freopen("C:\\Users\\Smit Patel\\Desktop\\out.txt","w",stdout);
        }

        si2(n,k);

        int num;
        FOR(i,1,n){
            num=0;
            FOR(j,0,k-1)si(x),num+=(x<<j);
            s.insert(num);
            m[num]++;
        }

        bool f=false;
        int mx=(1<<(1<<k));
        FOR(i,0,mx)
        f=f||check(i);

        if(f)
            cout<<"YES";
        else
            cout<<"NO";

        return 0;
    }
