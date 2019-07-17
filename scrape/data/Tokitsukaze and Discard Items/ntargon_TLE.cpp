#include <bits/stdc++.h>
using namespace std;



typedef unsigned long ul;
typedef unsigned long long ull;
typedef long long ll;
typedef vector<ll> vint;
typedef vector<vector<ll>> vvint;
typedef vector<vector<vector<ll>>> vvvint;
typedef vector<string> vstring;
typedef vector<vector<string>> vvstring;
typedef vector<char> vchar;
typedef vector<vector<char>> vvchar;
typedef vector<long double> vdouble;
typedef vector<vector<long double>> vvdouble;
typedef vector<vector<vector<long double>>> vvvdouble;
typedef pair<ll,ll> pint;
typedef vector<pint> vpint;
typedef vector<bool> vbool;

#define rep(i,n) for(ll i=0;i<n;i++)
#define repf(i,f,n) for(ll i=f;i<n;i++)
#define repr(i,n) for(ll i=n-1;i>=0;i--)
#define mp make_pair
#define mt make_tuple
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define ALL(obj) (obj).begin(), (obj).end()
// #define LLONG_MAX 9223372036854775806
#define vmax(vec) *max_element(vec.begin(), vec.end())
#define vmin(vec) *min_element(vec.begin(), vec.end())
#define vsort(vec) sort(vec.begin(), vec.end())
#define vsortgr(vec) sort(vec.begin(), vec.end(), greater<ll>())
#define MOD 1000000007

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

//
// struct Node{
//   vint children;
//   ll index;
//   ll prop;
// };
// struct edge{ll to; ll cost;};



int dy[]={0, 0, 1, -1};
int dx[]={1, -1, 0, 0,};

// ll X,Y,Z,K;
// ll pmax = 30000000000;
// vint A,B,C;

// void comb(vector<vector <long long int> > &v){
//   for(int i = 0;i <v.size(); i++){
//     v[i][0]=1;
//     v[i][i]=1;
//   }
//   for(int k = 1;k <v.size();k++){
//     for(int j = 1;j<k;j++){
//       v[k][j]=((v[k-1][j-1]+v[k-1][j])%MOD);
//     }
//   }
// }
ll gcd(ll a, ll b)
{
    if (a < b) {
        a ^= b;
        b ^= a;
        a ^= b;
    }

    return b ? gcd(b, a % b) : a;
}

ll lcm(int a, ll b)
{
    return a * b / gcd(a, b);
}




// 繰り返し二乗法
ll power(ll a, ll b){
	ll res=1;
	while(b>0){
		if(b&1) res=res*a%MOD;
		a=a*a%MOD;
		b>>=1;
	}
	return res;
}

const int MAX=510000;

ll fact[MAX], fact_inv[MAX];

void init_fact(ll n){
  fact[0]=1;
  // 階乗の計算
  rep(i, n) fact[i+1]=fact[i]*(i+1)%MOD;
  fact_inv[n]=power(fact[n], MOD-2);
  // 逆元の計算
  for(ll i=n-1;i>=0;i--) fact_inv[i]=fact_inv[i+1]*(i+1)%MOD;
}

ll comb(ll n, ll r){
	return (fact[n]*fact_inv[r])%MOD*fact_inv[n-r]%MOD;
}

ll perm(ll n, ll r){
  return (fact[n]*fact_inv[n-r])%MOD;
}


struct UnionFind {
    vector<ll> par; // par[i]:iの親の番号　(例) par[3] = 2 : 3の親が2
    vector<ll> num;
    // vector<ll> dist; // rootまでの距離

    UnionFind(ll N) : par(N), num(N){ //最初は全てが根であるとして初期化
      for(ll i = 0; i < N; i++) par[i] = i;
      for(ll i = 0; i < N; i++) num[i] = 1;
      // for(ll i = 0; i < N; i++) dist[i] = 0;

    }

    ll root(ll x) { // データxが属する木の根を再帰で得る：root(x) = {xの木の根}
        if (par[x] == x) return x;
        return par[x] = root(par[x]);
    }

    void unite(ll x, ll y) { // xとyの木を併合
        ll rx = root(x); //xの根をrx
        ll ry = root(y); //yの根をry
        if (rx == ry) return; //xとyの根が同じ(=同じ木にある)時はそのまま
        par[rx] = ry; //xとyの根が同じでない(=同じ木にない)時：xの根rxをyの根ryにつける
        num[ry] = num[rx] + num[ry];
    }



    bool same(ll x, ll y) { // 2つのデータx, yが属する木が同じならtrueを返す
        ll rx = root(x);
        ll ry = root(y);
        return rx == ry;
    }

    ll size(ll x){
      return num[root(x)];
    }


};

vint divisor(ll n){ // nの約数
  vint ret;
  for(ll i=1;i*i<=n;i++){
    if(n%i == 0){
      ret.pb(i);
      if(i*i!=n) ret.pb(n/i);
    }
  }
  vsort(ret);
  return ret;
}

ll my_pow(ll x,ll y){
  ll rtn=1;
  rep(i,y) rtn*=x;
  return rtn;
}

ll get_digit_in(ll n, ll i){ // i桁目の数字を得る。
  for(ll j=0;j<i-1;j++){
    n/=10;
  }
  return n%10;
}

ll get_digit(ll n){
  ll rtn=0;
  while(n>0){
    n/=10;
    rtn++;
  }
  return rtn;
}

map<ll,ll> prime_factor(ll n){
  map<ll,ll> rtn;
  for(ll i=2;i*i<=n;i++){
    while(n%i == 0){
      rtn[i]++;
      n /= i;
    }
  }
  if(n!=1) rtn[n] = 1;
  return rtn;
}

// nPnの順列に対して処理を実行する
void foreach_permutation(ll n, function<void(ll *)> f) {
  ll indexes[n];
  for (ll i = 0; i < n; i++) indexes[i] = i;
  do {
    f(indexes);
  } while (std::next_permutation(indexes, indexes + n));
}

void recursive_comb(ll *indexes, ll s, ll rest, function<void(ll *)> f) {
  if (rest == 0) {
    f(indexes);
  } else {
    if (s < 0) return;
    recursive_comb(indexes, s - 1, rest, f);
    indexes[rest - 1] = s;
    recursive_comb(indexes, s - 1, rest - 1, f);
  }
}

// nCkの組み合わせに対して処理を実行する
void foreach_comb(ll n, ll k, function<void(ll *)> f) {
  ll indexes[k];
  recursive_comb(indexes, n - 1, k, f);
}

// nPkの順列に対して処理を実行する
void foreach_permutation(ll n, ll k, function<void(ll *)> f) {
  foreach_comb(n, k, [&](ll *c_indexes) {
    foreach_permutation(k, [&](ll *p_indexes) {
      ll indexes[k];
      for (ll i = 0; i < k; i++) {
        indexes[i] = c_indexes[p_indexes[i]];
      }
      f(indexes);
    });
  });
}

ll arr[55556];
vint primes;

//エラトステネスの篩
void Eratosthenes(){
  ll N = 55556;
	for(ll i = 0; i < N; i++){
		arr[i] = 1;
	}
	for(ll i = 2; i < sqrt(N); i++){
		if(arr[i]){
			for(ll j = 0; i * (j + 2) < N; j++){
				arr[i *(j + 2)] = 0;
			}
		}
	}

	for(ll i = 2; i < N; i++){
		if(arr[i] && i%5==1){
      primes.pb(i);
			//cout << i << endl;
		}
	}
}





int main() {
  cout<<fixed<<setprecision(10);

  ll n,m,k; cin>>n>>m>>k;
  vint p(m);rep(i,m) cin>>p[i];

  vint q(m);
  q[0] = p[0];
  repf(i,1,m){
    q[i] = p[i]-p[i-1];
  }

  ll cnt = 0;
  ll ans = 0;
  ll num = 0;
  ll i = 0;
  while(i<m){
    if(cnt+q[i] <= k){
      cnt += q[i];
      num++;
      i++;
    }else{
      if(num>0){
        cnt -= num;
        num = 0;
        ans++;
      }else{
        cnt -= k;
      }
    }
  }

  if(num>0) ans++;

  cout<<ans<<endl;


}




//