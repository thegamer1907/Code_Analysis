#include <vector>
#include <iterator>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <cmath>
#include <queue>
#include <algorithm>
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
typedef long long ll;
using namespace std;
typedef vector<ll> vll; typedef set<ll> sll; typedef map<ll,ll> mll;
int bitct(long long r) {int c=0; for(; r; r&=r-1) c++; return c;}
long long gcd(long long x, long long y) {return x ? gcd(y%x,x) : y;}
long long choose(long long n, long long q) { if(n==0 || q==0) return 1;
  if (q==1) return n; else return ( choose(n, q-1) * (n-q+1 ) /q); }
template<typename T> ostream& operator << (ostream &o,vector<T> v) {o<<"[";
	int i=0,s=v.size();for(;i+1<s;i++)o<<v[i]<<", ";if(s)o<<v[i];o<<"]";return o;}
template<typename K, typename V> ostream& operator << (ostream &o,
  unordered_map<K, V> m) {o<<"{";for(auto i:m)o<<i.first<<" -> "<< i.second <<
  ", "; o<<"}";return o;}
template<typename K, typename V> ostream& operator << (ostream &o, map<K, V> m) 
  {o<<"{";for(auto i:m)o<<i.first<<" -> "<< i.second << ", "; o<<"}";return o;}
template<typename K> ostream& operator << (ostream &o, set<K> m) 
  {o<<"{";for(auto i:m)o<<i<< ", "; o<<"}";return o;}
template<typename K> ostream& operator << (ostream &o, unordered_set<K> m) 
  {o<<"{";for(auto i:m)o<<i<< ", "; o<<"}";return o;}
template<typename T> ostream& printv(vector<T> v) {int i=0,s=v.size();
  for(;i+1<s;i++)cout<<v[i]<<" ";if(s)cout<<v[i];return cout;}

int main() {
  ios_base::sync_with_stdio(false);
  ll N, K;
  cin >> N >> K;
  vector<ll> P(16);
  for(int i=0;i<N;i++) {
    ll trail=0;
    for(int k=0;k<K;k++) {
      trail<<=1;
      ll x;
      cin >> x;
      trail+=x;
    }
    P[trail]++;
  }
  cerr << P << endl;

  bool ok=false;
  set<vector<ll> > mein;
  for(int i=0;i<16;i++) {
    if(0==P[i])
      continue;
    vector<ll> x;
    
    for(int j=0, run=i;j<4;j++) {
      x.push_back(2*(run%2) -1);
      run = run>>1;
    }

    set<vector<ll> > men;
    men.insert(x);
    for(auto a:mein) {
      men.insert(a);
      vector<ll> c;
      for(int i=0;i<4;i++)
        c.push_back(x[i]+a[i]);
      men.insert(c);
    }

    for(auto a:men) {
      bool fail=false;
      for(int z=0;z<4;z++)
        if(a[z]>0) fail=true;
      if(!fail) ok=true;
    }
    /* cerr << men << endl; */
    mein=men;
  }
  if(ok) cout << "YES" << endl;
  else cout << "NO" << endl;




}
