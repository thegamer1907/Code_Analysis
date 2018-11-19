#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <cstring>
#include <map>
#include <queue>
#include <cmath>
#include <complex> // complex<double> a(1.2 , 2.3);// real(): 1.2, imag()2.3
using namespace std;

#define MOD 1000000007
#define ll long long
#define ld long double
#define FOR(i,a,b) for(ll i=(ll)a;i<(ll)b;i++)
#define rep(i,n) FOR(i,0,n)
#define pb push_back
#define mp make_pair
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define rmsame(a) sort(all(a)),a.erase(unique(all(a)), a.end())
#define rmvector(a,b) rep(i,a.size())rep(j,b.size())if(a[i]==b[j]){a.erase(a.begin()+i);i--;break;}
template<typename X> bool exist(vector<X> vec, X item){return find(all(vec), item)!=vec.end();}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  string pswd ="";
  cin >> pswd;
  ll N;
  ll f=0,s=0;//first,second
  
  cin >> N;
  rep(i,N){
    string str;
    cin >> str;
    if(str==pswd){
      cout << "YES" << endl;
      return 0;
    }
    if(str[1]==pswd[0]) f = 1;
    if(str[0]==pswd[1]) s = 1;
  }

  if(f*s) cout << "YES" << endl;
  else cout << "NO" << endl;

  
  
  return 0;
}
