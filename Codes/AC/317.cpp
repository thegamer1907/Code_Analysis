#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
using namespace std;
int main() {
    std::ios::sync_with_stdio(false);
    map <int,int> a;
    int n,m,sum=0,t;
    cin >> n;
    for (int i=1;i<=n;i++) {
      cin >> t;
      sum+=t;
      a[sum]=i;
    }
    cin >> m;
    for (int i=1;i<=m;i++) {
    cin >> t;
    auto it=a.lower_bound(t);
    cout << it->second << "\n";
    }
    cout.flush();
return 0;
}