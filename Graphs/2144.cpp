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
typedef pair<ll, ll> ii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vii;
typedef vector<bool> vb;
typedef vector<vector<int>> matrix;
typedef vector<vector<vector<int>>> cube;
typedef vector<vector<bool>> matrixb;
typedef vector<vector<int>> graph;

int abso(int n){
    return (n < 0) ? -n : n;
}

int main(){
    ll n, m;
    cin >> n >> m;
    if(n >= m) cout << n - m << endl;
    else{
        vb found(30001, false);
        // perform BFS
        queue<ii> q;
        q.push( make_pair(n, 0) );
        int ans = -1;
        bool done = false;
        while( !done ){
            ii cur = q.front();
            int num = cur.first;
            int cnt = cur.second;
            found[num] = true;
            q.pop();
            if( 2 * num == m ){
                done = true;
                ans = cnt + 1;
            }
            else if( !found[2 * num] && 2 * num - m < 10020){
                q.push( make_pair(2 * num, cnt + 1) );
                //cout << "pushing " << 2 * num << ", " << cnt + 1 << endl;
            }

            if(!done && num - 1 == m){
                done = true;
                ans = cnt + 1;
            }
            else if( num - 1 > 0 && !found[num - 1] ) {
                q.push( make_pair(num - 1, cnt + 1) );
                //cout << "pushing " << num - 1 << ", " << cnt + 1 << endl;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
