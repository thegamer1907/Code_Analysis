#include <bits/stdc++.h>
#ifdef LOCAL_TEST
  #pragma comment(linker, "/stack:16777216")
#endif
using namespace std;

/*******  All Required define Pre-Processors and typedef Constants *******/
#define mem(a, b) memset(a, (b), sizeof(a))
#define rep(i,k) for(int i=0;i<k;i++)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define foreach(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define mp make_pair
#define pb push_back
#define INF (ll)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define LLINF 1000111000111000111LL
#define tt ll t;cin>>t; while(t--)
#define sz(a) int(a.size())
#define present(container,element) (container.find(element)!=container.end())             //for set,map O(log N)
#define cpresent(container, element) (find(all(container),element) != container.end())    //for vector O(N)
#define ff first
#define ss second

typedef long long ll;
typedef vector<int> vi;
typedef vector< vi > vvi;
typedef pair<int,int> ii;
typedef vector< ii > vp;
typedef vector< vp > vvp;

ll Ceil(ll a,ll b){if(a%b==0)return a/b;else return a/b+1;}

int main(int argc, char const *argv[]) {
  #ifdef LOCAL_TEST
  freopen("in.txt","r",stdin);
  #else
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  #endif
  int n, m; cin >> n >> m;
  int a[105];
  rep(i, n) cin >> a[i];
  sort(a, a + n);
  int vmax = a[n - 1] + m;
  int vmin = a[n - 1];
  int sum = 0;
  rep(i, n) sum += a[i];
  if(n * a[n - 1] - sum < m){
    vmin = vmin + Ceil(m - n * a[n - 1] + sum, n);
  } 
  cout << vmin << ' ' << vmax << '\n';
  return 0;
 }
