#include <bits/stdc++.h>

#define INF 1000000000
#define FOR(i, a, b) for(int i=int(a); i<int(b); i++)
#define ROF(i, a, b) for(int i=int(a); i>=int(b); i--)
#define FORC(cont, it) for(decltype((cont).begin()) it = (cont).begin(); it != (cont).end(); it++)
#define pb push_back
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0)
#define endl '\n'

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<vi> vvi;

int main() {
  fastIO;
  string s;
  cin >> s;
  vi b(s.length()+1, 0);
  b[0] = -1;
  int i = 0,j = -1;
  while(i < s.length()) {
    while(j >= 0 && s[i] != s[j]) j = b[j];
    i++; j++;
    b[i] = j;
  }
  int longest = s.length();
  bool possible = false;
  while(longest > 0 && !possible) {
    longest = b[longest];
    if(longest) FOR(i,0,s.length()) {
      if(b[i] == longest) possible = true;
    }
  }
  if(possible) cout << s.substr(0, longest) << endl;
  else cout << "Just a legend" << endl;
  return 0;
}