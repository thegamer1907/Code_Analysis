#include <bits/stdc++.h>
using namespace std;

#define PI 3.1415926535897932384626433832795
#define MOD 1000000009
#define pb push_back
#define mp make_pair
#define FOR(i,x,y) for(int i=x;i<y;i++)
#define in(n) scanf("%d",&n)
#define out(n) printf("%d\n",n)
#define SORT(v)  sort(v.begin(), v.end())
#define SORTR(v) sort(v.rbegin(), v.rend())
#define MAX(v) *max_element(v.begin(), v.end())
#define MIN(v) *miytn_element(v.begin(), v.end())
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);
#define watch(x) cout << (#x) << " is " << (x) << endl;
const long long int MAXN = 1e6;
const long long int MINN = 1e2;
const long long int inf = 1e8;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef pair<int,ii> iii;
typedef vector<ii> vii;
typedef vector<vii> vvii;
typedef vector< iii > viii;
typedef long long ll;

ll lcm(ll a, ll b) {
    return a / __gcd(a, b) * b;
}


int main(){
      FAST
      int n,i,j,ans1=0,ans2=0,sum=0;
      cin>>n;
      int m;
      cin>>m;
      int a[n];
      for(i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
      }
      sort(a,a+n);
      ans2= a[n-1]+m;
      ans1 = a[n-1] + max(0.0,ceil(((sum+m)*1.0)/n) - a[n-1]);
      cout<<ans1<<" "<<ans2;
      return 0;
}
//A
