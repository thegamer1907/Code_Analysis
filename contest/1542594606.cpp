#include <bits/stdc++.h>
// #pragma GCC optimize ("O3")
// #pragma GCC target ("sse4")
using namespace std;

typedef long long LL;
typedef unsigned long long ULL;
typedef pair<int,int> PII;

#define REP(i,n) for(int i=0;i<(n);++i)
#define FOR(i,a,b) for (int i=(a); i<(b); ++i)
#define FORD(i,a,b) for (int i=(a)-1; i>=(b); --i)

#define pb push_back
#define mp make_pair
#define st first
#define nd second

const int MOD = 1000000007;

char pass[5];
char words[200][5];

int main() {
  // ios_base::sync_with_stdio(0);

  int N;
  scanf("%s%d", pass, &N);
  REP(i,N) scanf("%s", words[i]);

  bool found = false;
  REP(i,N) if (string(words[i]) == string(pass)) found = true;
  REP(i,N) REP(j,N) if (words[i][1] == pass[0] && words[j][0] == pass[1]) found = true;
  printf("%s\n", found ? "YES" : "NO");
}
