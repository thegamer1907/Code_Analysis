#include <bits/stdc++.h>
using namespace std;

bool dfs(int *a, int n, int t) {
    if(n == t) {
        return true;
    }
    if(n > t) {
        return false;
    }
    
    int k = a[n-1];
    return dfs(a, k+n, t);

}

int main() {
    int n, t;
    cin >> n >> t;

    int *a = new int[n];
    for(int i = 0;i<n-1;i++) {
        cin >> a[i];
    } 
   
    bool *visited = new bool[n];
    bool ans = dfs(a, 1, t);

    if(ans) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}