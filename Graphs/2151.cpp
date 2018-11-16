#include <iostream>
#include <stack>
#include <algorithm>
#include <string.h>
#include <queue>
#include <iomanip>
#include <cmath>
#include <set>

using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ii, int> iii;
#define fi first
#define se second

const int maxN = 2e5 + 9, MOD = 1e9 + 7;

int n, m;

int shp[maxN];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    
    cin >> n >> m;
    
    memset(shp, -1, sizeof shp);
    
    queue<int> q;
    q.push(n);
    shp[n] = 0;
    
    while(q.size()){
        int cr = q.front(); q.pop();
        
        if(cr - 1 > 0 && shp[cr - 1] == -1){
            shp[cr - 1] = shp[cr] + 1;
            q.push(cr - 1);
        }
        if(cr < m && shp[cr * 2] == -1){
            shp[cr * 2] = shp[cr] + 1;
            q.push(cr * 2);
        }
        
    }
    
    cout << shp[m] << '\n';
    
}
