#include <cstdio>
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdlib.h>
#include <time.h>

#include <algorithm>
#include <math.h>
#include <cmath>
#include <functional>
#include <cctype>

#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <bitset>
#include <string>

#define sync ios_base::sync_with_stdio(false); cin.tie(NULL)
#define FOR(i, a, b) for(int i = a; i < (int)b; i++)
#define RFOR(i, a, b) for(int i = (int)a - 1; i >= (int)b; i--)
#define INF 2000000000
#define PI 3.14159265358979323846264338327950288419716939937510582

using namespace std;

typedef long long int ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vii;
typedef vector<bool> vb;
typedef vector<vector<int>> matrix;
typedef vector<vector<vector<int>>> cube;
typedef vector<vector<bool>> matrixb;
typedef vector<vector<int>> graph;

int main(){
    sync;
    int n, m;
    cin >> n >> m;
    vi v(n);
    vi dp(n);
    vb found(100001, false);
    FOR(i, 0, n){
        cin >> v[i];
    }
    dp[n - 1] = 1;
    found[ v[n - 1] ] = true;
    RFOR(i, n - 1, 0){
        if(found[v[i]]) dp[i] = dp[i + 1];
        else {
            dp[i] = dp[i + 1] + 1;
            found[ v[i] ] = true;
        }
    }

    int q;
    FOR(i, 0, m){
        cin >> q;
        cout << dp[q - 1] << endl;
    }
    return 0;
}