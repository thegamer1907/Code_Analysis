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
  ll N;
  cin >> N;
  vector<string> S;
  vector<string> E;
  vector<vector<ll> > ct(N, vector<ll>(14));
  vector<vector<vector<char> > > 
    check(N, vector<vector<char> >(14, vector<char>(2ll<<14)));
  for(int zi=0;zi<N;zi++) {
    string x;
    cin >>x;
    S.push_back(x);
    E.push_back(x);
    /* cerr << x << endl; */

    string nx=x;
    ll trail=0;
    for(int i=0;i<nx.size();i++) {
      trail=trail<<1;
      trail+=nx[i]-'0';
      trail = trail & ((1ll<<30)-1);
      /* cerr << trail << endl; */
      for(int j=0;j<14 && j<=i;j++) {
        ll me=trail&((1ll<<(j+1))-1);
        /* cerr << me << endl; */
        /* cerr << "c" << j << " " << check[j][me] << endl; */
        if(0==check[zi][j][me]) {
          check[zi][j][me]=1;
          ct[zi][j]++;
        }
      }
    }
    /* cerr << ct[zi] << endl; */
  }
  ll M;
  cin >> M;
  vector<ll> A, B;
  for(int i=0;i<M;i++) {
    ll a, b;
    cin >>a >>b;
    a--;b--;
    A.push_back(a);
    B.push_back(b);
  }

  for(int i=0;i<M;i++) {
    string nx=E[A[i]]+S[B[i]];

    if(S[A[i]].size() >= 16)
      S.push_back(S[A[i]].substr(0,16));
    else
      S.push_back((S[A[i]]+S[B[i]]).substr(0,16));
    if(E[B[i]].size() >= 16)
      E.push_back(E[B[i]].substr(E[B[i]].size()-16,16));
    else {
      string proc=E[A[i]]+E[B[i]];
      E.push_back(proc.substr(max((int)proc.size()-16, 0),min((int)proc.size(), 16)));
    }

    vector<ll> myct(14);
    auto myck=check[A[i]];
    for(int p=0;p<14;p++)
      for(int q=0;q<(2ll<<14);q++) {
        myck[p][q]|=check[B[i]][p][q];
        if(myck[p][q])
          myct[p]++;
      }

    ll trail=0;
    for(int xi=0;xi<nx.size();xi++) {
      trail=trail<<1;
      trail+=nx[xi]-'0';
      trail = trail & ((1ll<<60)-1);
      /* cerr << trail << endl; */
      for(int j=0;j<14 && j<=xi;j++) {
        ll me=trail&((1ll<<(j+1))-1);
        /* cerr << me << endl; */
        /* cerr << "c" << j << " " << check[j][me] << endl; */
        if(0==myck[j][me]) {
          myck[j][me]=1;
          myct[j]++;
        }
      }
    }


    ct.push_back(myct);
    check.push_back(myck);

    ll out=0;
    for(int u=0;u<14;u++) {
      if(ct[N+i][u] != 1ll<<(u+1))
        break;
      out=u+1;
    }
    cout << out << endl;
  }
}



