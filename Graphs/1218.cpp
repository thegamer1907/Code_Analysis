#include <iostream>
#include <iomanip>
#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <set>
#include <vector>
#include <map>
#include <string>
#include <stack>
#include <queue>
#include <ctime>
#include <numeric>

using namespace std;

const int maxn = (int)3e4 + 1;

int a[maxn];
vector <int> gph[maxn];

bool u[maxn], flag;

void dfs(int x, int t) {
    u[x] = 1;
    for(int i : gph[x]){
        if(!u[i]){
            if(t == i && !flag){
                flag = 1;
                cout << "YES" << endl;
            }
            dfs(i,t);
        }
    }
}

int main() {
    
    //cout << "TEST: ";
    
    int n, m;
    cin >> n >> m;
    
    for (int i = 1; i < n; i++) {
        cin >> a[i];
        gph[i].push_back(a[i] + i);
    }
    dfs(1,m);
    if(!flag){
        cout << "NO";
    }
    
    return 0;
}
