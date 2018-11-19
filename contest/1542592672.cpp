#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp> // Common file
//#include <ext/pb_ds/seg_tree_policy.hpp> // Including seg_sum_order_statistics_node_update
#include <stdio.h>
#include <cassert>
using namespace std;
//using namespace __gnu_pbds;
typedef long lo;
typedef pair<lo,lo> ll;//pair
typedef vector<lo> vl;  //vector of long
typedef vector<ll > vll;   //vector of pair
typedef priority_queue<lo>p_q;
typedef vector< vl > vvl;  //vector of vectors
#define X first
#define Y second
#define mp(a,b) make_pair((a),(b))
#define REP(a,b) for(lo i=(a);i<(lo)b;i++)//no need to declare variable i
#define REPE(a,b,c,d) REP(a,b)for(lo j=(c);j<(lo)d;j++)//no need to declare vaiables i,j
#define REPV(a,b,c) for((a)=b;(a)<(c);(a)++)//a is the variable
#define IREP(a,b) for(lo i=(a);i>=(b);i--)
#define IREPV(a,b,c) for((a)=b;(a)>=(c);(a)--)
#define all(v) (v).begin(),(v).end()
#define TRV(a) for(auto it : a)
#define INF 300010
#define INFI 10000000000000000
#define MOD 1000000007
#define mod 10
#define CHECK_BIT(var,pos) ((var) & (1<<(pos)))
#define pb(a) push_back((a))
#define meme(a,b) memset(a, b, sizeof a)
#define BASE 1005LL
/*order statistic seg_sum
typedef
seg_sum<
  lo,
    null_type,
  less_equal<lo>,
  rb_seg_sum_tag,
  // This policy updates nodes' metadata for order statistics.
  seg_tree_order_statistics_node_update>
ordered_set;*/

template<typename T> ostream& operator<< ( ostream &o,vector<T> v ) {
    if ( v.size() >0 )o<<v[0];
    for ( unsigned   i=1; i<v.size(); i++ )o<<" "<<v[i];
    return o<<endl;
}
template<typename U,typename V> ostream& operator<< ( ostream &o,pair<U,V> p ) {
    return o<<"("<<p.first<<", "<<p.second<<") ";
}
template<typename T> istream& operator>> ( istream &in,vector<T> &v ) {
    for ( unsigned   i=0; i<v.size(); i++ )in>>v[i];
    return in;
}
template<typename T> istream& operator>> ( istream &in,pair <T,T> &p ) {
    in>>p.X;
    in>>p.Y;
    return in;
}

//MATRIX
/*struct Matrix{
  lo a[80][80],n,m,j,k;

  friend Matrix operator + (const Matrix &lhs, const Matrix &rhs){
    Matrix res;
    res.n = lhs.n;
    res.m = lhs.m;
    REP(0,lhs.n)REPV(j,0,lhs.m)res.a[i][j] = (lhs.a[i][j] + rhs.a[i][j]) % mod;
    return res;
  }

  friend Matrix operator * (const Matrix &lhs, const Matrix &rhs){
    Matrix res;
    res.n = lhs.n;
    res.m = lhs.m;
    REP(0,lhs.n)REPV(0,rhs.m){
        res.a[i][j] = 0;
        REPV(k,0,lhs.m)res.a[i][j] += lhs.a[i][k] * rhs.a[k][j];
        res.a[i][j] %= mod;
      }
    return res;
  }

  friend Matrix transpose(){
    Matrix res;
    res.n = n;
    res.m = m;
    REP(0,n)REPV(j,0,m)res[i][j]=a[j][i];
  }

};

Matrix fast_pow(Matrix a, lo m){
  Matrix res;
  res.n = a.n;
  res.m = a.m;
  memset(res.a, 0, sizeof res.a);
  for(lo i = 0; i < res.n; ++i)
    res.a[i][i] = 1;
  while(m){
    if(m & 1)  res = res * a;
    m >>= 1;
    a = a * a;
  }
  return res;
}

//END MATRIX
*/
int main(){
    set<char> se1,se2;
    string s,te;
    cin>>s;
    lo n;
    bool f=false;
    cin>>n;
    REP(0,n){
        cin>>te;
        if(te==s){f=true;}
        se1.insert(te[0]);
        se2.insert(te[1]);
    }
    if(f){cout<<"YES";return 0;}
    if(se1.find(s[1])!=se1.end() && se2.find(s[0])!=se2.end())cout<<"YES";
    else cout<<"NO";
    return 0;
}
