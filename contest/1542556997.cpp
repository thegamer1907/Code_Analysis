#include <bits/stdc++.h>

using namespace std;

#define topper top //XDDDDDDD

#define mp make_pair
#define pb push_back
#define db(x) cerr << #x << " == " <<  x << endl;
#define _ << " " <<

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;

const long double EPS = 1e-9;
const int N=1e5+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;

int h, m, s, t1, t2;
int h1, m1, s1, h2, m2, s2;
int vis1[N], vis2[N];

void dfs1(int u) {
  vis1[u] = 1;
  int v = (u + 1) % 60; 
  if(v != h1 and v != m1 and v != s1) dfs1(v);
}

void dfs2(int u) {
  vis2[u] = 1;
  int v = (u - 1 + 60) % 60; 
  if(v != h2 and v != m2 and v != s2) dfs2(v);
}

int main(){
  scanf("%d %d %d %d %d", &h, &m, &s, &t1, &t2);

  t1 = (t1 * 5) % 60;
  t2 = (t2 * 5) % 60;

  h1 = (h * 5) % 60 + m / 12 + 1;
  h2 = (h * 5) % 60 + m / 12; 

  m1 = (m+1) % 60;
  m2 = m;

  s1 = s;
  s2 = s;

  dfs1(t1), dfs2(t1);

  printf("%s\n", vis1[t2] or vis2[t2] ? "YES" : "NO");

	return 0;
}

