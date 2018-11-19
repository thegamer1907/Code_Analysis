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
  string pass;
  cin >> pass;
  ll N;
  cin >> N;
  vector<string> K;
  for(int i=0;i<N;i++) {
    string x;
    cin >> x;
    K.push_back(x);
  }
  for(int i=0;i<N;i++) {
    if(pass==K[i]) {
      cout << "YES" << endl;
      return 0;
    }
    for(ll j=0;j<N;j++) {
      if(pass[0] == K[j][1] &&
          pass[1] == K[i][0]) {
        cout << "YES" << endl;
        return 0;
      }
    }
  }

  cout << "NO" << endl;
}

