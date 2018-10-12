# include <bits/stdc++.h>
using namespace std;

# define test(pqpq) rep(te, pqpq)
# define si(a) scanf("%d", &a)
# define si2(a, b) scanf("%d%d", &a, &b)
# define si3(a, b, c) scanf("%d%d%d", &a, &b, &c)
# define rep(i, n) For(i, 0, n)
# define For(i, a, b) FOR(i, a, b, 1)
# define FOR(i, a, b , c) for(int i = (a); i < (b); i += (c))
# define FOREACH(i, x) for(__typeof__((x).begin())i=(x).begin();i!=(x).end();i++)
# define tbit(a) __builtin_popcount(a)
# define bchk(a, x) ((a)>>(x))&(1)
# define bset(a, x) ((a)|(1<<(x)))
# define bclr(a, x) ((a)&(~(1<<(x))))
# define mem(a) memset(a, 0, sizeof(a))
# define read(x) freopen(#x, "r", stdin)
# define write(x) freopen(#x, "w", stdout)
# define all(x) x.begin(), x.end()
# define faster() {ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);}

# define dbg(args...)    {string sss(#args);sss+=',';cerr<<"-->";debugger::call(all(sss), args);cerr<<"\n";}
# define dbgA(A, n)      {cerr<<"-->"<<#A<<"=(";rep(i, n)cerr<<A[i]<<" ";cerr<<")\n";}
# define dbgA2(A, n, m)  {cerr<<"-->"<<#A<<"=\n";rep(i, n){rep(j, m){cerr<<setw(4)<<A[i][j]<<" ";}cerr<<"\n";}cerr<<"\n";}
# define mpr make_pair

struct debugger {
    typedef string::iterator si;
    static void call(si it, si ed) {}
    template<typename T, typename ... aT>
    static void call(si it, si ed, T a, aT... rest) {
            string b;
        for(; *it!=','; ++it) if(*it!=' ')b+=*it;
        cerr << b << " = " << a << " ";
        call(++it, ed, rest...);
    }
};

int dx[] = {1, -1, 0, 0, -1, 1, -1, 1};
int dy[] = {0, 0, 1, -1, -1, -1, 1, 1};

int knight_x[] = {2, 2, -2, -2, 1, 1, -1, -1};
int knight_y[] = {1, -1, 1, -1, 2, -2, 2, -2};

typedef long long int ll;
typedef unsigned long long int ull;
const double PI = 2.0*acos(0.0);
const double GOLD = (1.0 + sqrt(5.0))/2.0;
const double eps = 1e-9;

void in_generate(){
    write(input.txt);
    /// inputs
    exit(1);
}

/***--------------- Template Ends Here ----------------***/

/// 5:15 - 8:15 /// cracked
/// 9:50 - 12:50

string s;
int ar[1000010];
int pq[1000010];

int main(){
    #ifdef home
        read(input.txt);
  //      write(input.txt);
    #endif // home
    int k;
    cin>>k>>s;
    int n = s.size();
    For(i, 1, n + 1){
        if(s[i - 1] == '1'){
            ++ar[i];
        }
        ar[i] = ar[i - 1] + ar[i];
    }
    pq[0]++;
    ll ans = 0;
    for(int i = 1; i <= n; i++){
        int p = ar[i] - k;
        if(p >= 0){
            ans+=pq[p];
        }
        ++pq[ar[i]];
    }
    cout<<ans<<endl;

}
