// We only fail when we stop trying
#include <bits/stdc++.h>
#define X first
#define Y second
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define mp make_pair
using namespace std;
typedef long long ll;
const int mod = (int) 1e9 + 7;
const int oo = (int) 1e9;

const int N = 1e5 + 8;
int n, m;
int arr[N], ans[N];
set<int> s;

int main()
{
  scanf("%d%d", &n, &m);
  for(int i = 0 ; i < n ; i++)
    scanf("%d", arr+i);
  for(int i = n - 1 ; i >= 0 ; i--){
    s.insert(arr[i]);
    ans[i] = sz(s);
  }
  while(m--){
    int l; scanf("%d", &l);
    printf("%d\n", ans[--l]);
  }
  return 0;
}
