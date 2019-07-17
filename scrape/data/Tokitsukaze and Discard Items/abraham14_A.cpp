#include <bits/stdc++.h>
#define For(i, a, b, c) for(int i = (a); i <= (b); i += (c))
#define Rof(i, a, b, c) for(int i = (a); i >= (b); i += (c))
#define Forn(i, n) For(i, 0, (n) - 1, +1)
#define For1(i, n) For(i, 1, (n), +1)
#define Forall(i, x) for(auto i = (x).begin(); i != (x).end(); i++)
#define size(x) (int) (x).size()
#define all(x) (x).begin(), (x).end()
#define _ ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0), cout.precision(15);

#define fst first
#define snd second
#define pb push_back
#define lower lower_bound
#define upper upper_bound
#define ENDL '\n'
using namespace std;

typedef long long lli;
typedef unsigned long long ulli;
typedef pair<int, int> ii;

template <class T>
struct rge{ T b, e; };

template <class T>
rge<T> range(T i, T j){
  return rge<T>{i, j};
};

template <class A, class B>
ostream & operator << (ostream &os, pair<A, B> p){
  return os << "(" << p.fst << ", " << p.snd << ")";
}

template <class T>
ostream & operator << (ostream &os, rge<T> d){
  os << "[";
  for(auto it = d.b; it != d.e; it++)
    os << (it == d.b ? "": ", ") << *it;
  return os << "]";
}

#ifdef ONLINE_JUDGE
  #define debug(x) 0;
#else
  #define debug(x) cout << #x": " << (x) << endl;
#endif

queue<lli> special;
lli n, m, k;

int main(){ _
  cin >> n >> m >> k;
  Forn(i, m){
    lli x;
    cin >> x;
    special.push(x);
  }
  lli op = 0;
  lli lo = 1, hi = k;
  while( !special.empty() ){
    lli move = 0;
    while( !special.empty() ){
      lli x = special.front();
      if( x <= hi ){
        move++;
        special.pop();
      }else{
        break;
      }
    }
    if( !special.empty() && move == 0 ){
      lli x = special.front();
      lli add = (x - hi + k - 1) / k; // need to add to go next page
      lo += k * add;
      hi += k * add;
    }
    if( move ){
      hi += move;
      op++;
    }
  }
  cout << op << '\n';
  return 0;
}