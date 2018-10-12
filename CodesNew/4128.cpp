#include <bits/stdc++.h>
using namespace std;
#define printint(v) copy(begin(v), end(v), ostream_iterator<int>(cout," "))
#define printintv(s,e) copy(s,e, ostream_iterator<int>(cout," "))
#define forstl(i,v) for(auto &i: v)
#define forn(i,e) for(int i = 0; i < e; i++)
#define forsn(i,s,e) for(int i = s; i < e; i++)
#define rforn(i,s) for(int i = s; i >= 0; i--)
#define rforsn(i,s,e) for(int i = s; i >= e; i--)
#define clz(a) __builtin_clz(a) // count leading zeroes
#define ctz(a) __builtin_ctz(a) // count trailing zeroes
#define popc(a) __builtin_popcount(a) // count set bits (for ints only diff for ll)
//https://gcc.gnu.org/onlinedocs/gcc/Other-Builtins.html for other in built
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define ub(v,a,b,num) upper_bound(v.begin()+a, v.begin()+b, num)-v.begin() //b not included
typedef long long ll;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
typedef map<int,int> m32;
// upper_bound(arr2.begin(), arr2.end(), 20)-arr2.begin() useful for binary search.
// the above gives position of first number greater than 20 in the vector.

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n,q; cin>>n>>q;
    v64 a(n+1,0),sum(n+1,0), b, k(q+1,0); 
    for(int i=1;i<=n; i++) cin>>a[i]; sum[1]=a[1];
    for(int i=2; i<=n; i++) sum[i]=sum[i-1]+a[i];    
    for(int i=1;i<=q; i++) cin>>k[i];
    //b=a; 
    int pos=1; long long int prev_kills=0;
    //cout<<ub(sum,7)<<endl;

    for(int i=1; i<=q; i++)
    {
        pos=ub(sum,1,n+1,k[i]+prev_kills);
        
        if(pos==n+1)
        {
            //b=a; 
            cout<<n<<endl; pos=1; prev_kills=0; continue;
        }
        //b[pos]=sum[pos]-prev_kills-k[i];
        prev_kills+=k[i];
        cout<<n-pos+1<<endl;
    }

    return 0;
}
