#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define over LONG_LONG_MAX
ll inf = 1LL << 60;
ll mod = 1000000007;
double pi = acos(-1.0);

using namespace std;

int automaton[1000010];
int rautomaton[1000010];

void build(string v){
  int len = 0;
  automaton[0] = 0;
  int i = 1;
  while (i < v.length()){
    if (v[i] == v[len]){
      len++;
      automaton[i] = len;
      i++;
    }
    else{
      if (len != 0){
      len = automaton[len-1];
      }
      else{
        automaton[i] = 0;
        i++;
      }
    }
  }
}
void rbuild(string v){
  int len = 0;
  rautomaton[0] = 0;
  int i = 1;
  while (i < v.length()){
    if (v[i] == v[len]){
      len++;
      rautomaton[i] = len;
      i++;
    }
    else{
      if (len != 0){
      len = rautomaton[len-1];
      }
      else{
        rautomaton[i] = 0;
        i++;
      }
    }
  }
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  //freopen("in.in", "r", stdin);
  string t;
  cin >> t;
  build(t);
  reverse(t.begin(), t.end());
  rbuild(t);
  int ans = 0;
  for(int i=1 ; i<t.length() ; i++){
    if(automaton[i] && rautomaton[t.length()-1-i+automaton[i]-1] == automaton[i]){//match with prefix && match with suffix
      ans = max(ans,automaton[i]);
    }
  }
  if(ans) for(int i=ans-1 ; i>=0 ; i--) cout << t[i];
  else cout << "Just a legend";
  return 0;
}

