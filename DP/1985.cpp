#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef pair<ll, ll> pll;
typedef vector<pll, pll> vll;
typedef pair<int, ii> tri;
typedef vector<tri> viii;

#define fi(i,a,b) for(auto i=a;i<b;i++)
#define rep(i,n) fi(i,0,n)
#define fd(i,a,b) for(auto i=a;i>=b;i--)
#define pb push_back
#define mp make_pair
#define ss second
#define ff first
#define sz(a) a.size()
#define sc(x) scanf("%d", &x)
#define sc2(x, y) scanf("%d %d", &x, &y)
#define sc3(x) scanf("%s", x)
#define sc4(x) scanf("%lld", &x)
#define sc5(x, y) scanf("%lld %lld", &x, &y)
#define all(a) a.begin(), a.end()
#define mse(a, x) memset(a, x, sizeof(a))
#define mod 1000000007
#define DREP(a) sort(all(a)); a.erase(unique(all(a)),a.end());
#define INDEX(arr,ind) (lower_bound(all(arr),ind)-arr.begin())
#define DEBUG 1
#define ok if(DEBUG)
#define trace1(x) ok cerr << #x << ": " << x << endl;
#define trace2(x, y) ok cerr << #x << ": " << x << " | " << #y << ": " << y << endl;
#define trace3(x, y, z) ok cerr << #x << ": " << x << " | " << #y << ": " << y << " | " << #z << ": " << z << endl;
#define trace4(a, b, c, d) ok cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " \
								<< #d << ": " << d << endl;
#define trace5(a, b, c, d, e) ok cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " \
									  << #d << ": " << d << " | " << #e << ": " << e << endl;
#define trace6(a, b, c, d, e, f) ok cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " \
									     << #d << ": " << d << " | " << #e << ": " << e << " | " << #f << ": " << f << endl;



int main() 
{
	int n,m;
    scanf("%d %d",&n,&m);
    vector<int> arr(n);
    vector<pair<int,int> > ansarr(n);
    map<int, int> pmap;
    vector<int> indexsize(n+1,0);
    // scanf("%d",&arr[0]);
    // indexsize[0]
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    reverse(arr.begin(), arr.end());
    for(int i=0;i<n;i++)
    {
        int x = arr[i];
        
        if(pmap.find(x)==pmap.end())
        {
            indexsize[i+1]=indexsize[i]+1;
            pmap[x]=1;
        }
        else
            indexsize[i+1]=indexsize[i];
    }
    for(int i=0;i<m;i++)
    {
        int temp;
        scanf("%d",&temp);
        printf("%d\n", indexsize[n+1-temp]);
    }
    return 0;
}