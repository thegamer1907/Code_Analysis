#include <bits/stdc++.h>
#define x first
#define y second

using namespace std;

vector<int> parent;

pair<int, int> root(int a, int d = 1) {
  if (parent[a] == a) return {d, a};
  return root(parent[a], d + 1);
}

int main() {
  int n;
  cin >> n;

  parent.resize(n);
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;

    if (x == -1)
      parent[i] = i;
    else
      parent[i] = x - 1;
  }

  int mx = 0;
  for (int i=0;i<n;i++)
    mx = max(mx, root(i).x);

  cout << mx << "\n";
}
