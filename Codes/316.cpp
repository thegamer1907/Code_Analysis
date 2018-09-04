#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
using namespace std;
int ans[1000010];
int main() {
    std::ios::sync_with_stdio(false);
    int n,m,sum=0,t;
    cin >> n;
    for (int i=1;i<=n;i++) {
      cin >> t;
     for (int j=sum+1;j<=sum+t;j++) ans[j]=i;
      sum+=t;
    }
    cin >> m;
    for (int i=1;i<=m;i++) {
    cin >> t;
    cout << ans[t] << "\n";
    }
    cout.flush();
return 0;
}