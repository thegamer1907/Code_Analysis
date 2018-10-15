#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

typedef long long ll;

int main(){
    int n, m, v, maxx = INT_MIN, minn;
    cin >> n >> m;
    priority_queue< int, vector<int>, greater<int> > q;
    for(int i = 0; i < n; i++){
        cin >> v;
        q.push(v);
        maxx = max(maxx, v);
    }
    minn = maxx;
    for(int i = 0; i < m; i++){
        int j = q.top();
        q.pop();
        q.push(j+1);
        minn = max(minn, j+1);
    }
    cout << minn << " " << maxx+m << "\n";
}
