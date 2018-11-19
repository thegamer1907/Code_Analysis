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

const int N = 300;
const int K = 10;

string f[N];
string b[N];
int ans[N];

bitset<(1 << K)> bit[N][K+1];

pair<string, string> getfb(string &s){
  string x, y;
  for(int i = 0; i < K and i < s.length(); i++) x += s[i];
  int ss = max(int(s.length()) - K, 0);
  for(int i = ss; i < s.length(); i++) y += s[i];
  
  return mp(x, y);
}

void process(int idx, string &s){
  for(int i = 1; i <= K; i++){
    if(i > s.length()) continue;
    int num = 0;
    for(int j = 0; j < i; j++){
      num = num * 2 + (s[j] - '0');
    }
    bit[idx][i].set(num);
    for(int j = i; j < s.length(); j++){
      num = num * 2 + (s[j] - '0');
      if(num & (1 << i)) num ^= (1 << i);
      bit[idx][i].set(num);
    }
  }
}

void combine(int idx, int x, int y){
  f[idx] = f[x];
  b[idx] = b[y];
  
  if(f[idx].length() < K) f[idx] = f[idx] + f[y];
  if(b[idx].length() < K) b[idx] = b[x] + b[idx];
  
  for(int i = 1; i <= K; i++){
    bit[idx][i] = bit[x][i] | bit[y][i];
  }
  
  string s = b[x] + f[y];
  
  ans[idx] = max(ans[x], ans[y]);
  int cur = ans[idx] + 1;
  
  for(int i = cur; i <= K; i++){
    if(i > s.length()) continue;
    
    int num = 0;
    for(int j = 0; j < i; j++){
      num = num * 2 + (s[j] - '0');
    }
    bit[idx][i].set(num);
    for(int j = i; j < s.length(); j++){
      num = num * 2 + (s[j] - '0');
      if(num & (1 << i)) num ^= (1 << i);
      bit[idx][i].set(num);
    }
    
    if(bit[idx][i].count() == (1 << i)) ans[idx] = i;
  }
}

int main(){ _
  int n;
  cin >> n;
  
  for(int i = 0; i < n; i++){
    string s;
    cin >> s;
    auto p = getfb(s);
    f[i] = p.fi;
    b[i] = p.se;
    
    process(i, s);
    
    for(int j = 1; j <= K; j++){
      if(bit[i][j].count() == (1 << j)) ans[i] = j;
    }
  }
  
  int m;
  cin >> m;
  
  for(int i = 0; i < m; i++){
    int x, y;
    cin >> x >> y;
    x--, y--;
    combine(n+i, x, y);
    cout << ans[n+i] << '\n';
  }

  return 0;
}
