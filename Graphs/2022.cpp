#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int u64;
typedef long long int i64;

struct pairhash {
public:
  template <typename T, typename U>
  std::size_t operator()(const std::pair<T, U> &x) const
  {
    return 13*std::hash<T>()(x.first) + 23*std::hash<U>()(x.second);
  }
};

struct VectorHash {
    size_t operator()(const std::vector<int>& v) const {
        std::hash<int> hasher;
        size_t seed = 0;
        for (int i : v) {
            seed ^= hasher(i) + 0x9e3779b9 + (seed<<6) + (seed>>2);
        }
        return seed;
    }
};

int nrestrants=0;

void catverse(unordered_map<int, unordered_set<int>>& t, vector<int>& vertices, int v, int m, int mcats, int parent) {
  if (vertices[v]) {
    mcats++;
  } else {
    mcats=0;
  }
  if (mcats>m) return;
  unordered_set<int> children = t[v];
  int nchilds = 0;
  for (int c : children) {
    if (c!=parent) {
      catverse(t, vertices, c, m, mcats, v);
      nchilds++;
    }
  }
  if (nchilds==0) {
    nrestrants++;
  }
}

int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    int n;
    int m;
    cin>>n;
    cin>>m;
    vector<int> vertices;
    for (int i=0;i<n;++i) {
      int v;
      cin >> v;
      vertices.push_back(v);
    }
    unordered_map<int, unordered_set<int>> t;
    for (int i=0;i<n-1;i++) {
      int a;
      int b;
      cin>>a;
      cin>>b;
      a--;
      b--;
      t[a].insert(b);
      t[b].insert(a);
    } 
    catverse(t, vertices, 0, m, 0, -1);
    cout <<nrestrants<<endl;
    return 0;
}