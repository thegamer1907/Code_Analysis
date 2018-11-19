#include <bits/stdc++.h>

#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define foreach(it, v) for(auto it=(v).begin(); it != (v).end(); ++it)

#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define __ freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

#define tr(...) cout<<__FUNCTION__<<' '<<__LINE__<<" = ";trace(#__VA_ARGS__, __VA_ARGS__)

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;

template<typename S, typename T> 
ostream& operator<<(ostream& out,pair<S,T> const& p){out<<'('<<p.fi<<", "<<p.se<<')';return out;}

template<typename T>
ostream& operator<<(ostream& out,vector<T> const& v){
int l=v.size();for(int i=0;i<l-1;i++)out<<v[i]<<' ';if(l>0)out<<v[l-1];return out;}

template<typename T>
void trace(const char* name, T&& arg1){cout<<name<<" : "<<arg1<<endl;}

template<typename T, typename... Args>
void trace(const char* names, T&& arg1, Args&&... args){
const char* comma = strchr(names + 1, ',');cout.write(names, comma-names)<<" : "<<arg1<<" | ";trace(comma+1,args...);}

const ld PI = 3.1415926535897932384626433832795;

const int N = 100100;
const int K = 4;

int ok[1 << K];

int main(){ _
  int n, k;
  cin >> n >> k;
  
  for(int i = 0; i < n; i++){
    int num = 0;
    for(int j = 0; j < k; j++){
      int x;
      cin >> x;
      num <<= 1;
      num |= x;
    }
    ok[num] = 1;
  }
  
  if(ok[0]){
    cout << "YES" << endl;
    return 0;
  }  
    
  int tot = (1 << k);
  for(int i = 1; i < tot; i++){
    for(int j = i+1; j < tot; j++){
      if(ok[i] and ok[j] and (i&j) == 0){
        cout << "YES" << endl;
        return 0;   
      }
    }
  }
  cout << "NO" << endl;
  return 0;
}
