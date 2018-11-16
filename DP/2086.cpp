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
#define FI first.first
#define SE first.second
#define TH second

const int maxN = 1e5 + 9, MOD = 1e9 + 7;

int n;
int arr[maxN];
int m;
set<int> s;
int ans[maxN];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    
    cin >> n >> m;
    
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    for(int i = n - 1; i >= 0; i--){
        s.insert(arr[i]);
        ans[i] = s.size();
    }
    
    for(int i = 0, inp; i < m; i++){
        cin >> inp;
        cout << ans[--inp] << '\n';
    }
    
}

