#include <bits/stdc++.h>
using namespace std;
#define FOR(index, start, end) for(int index = start; index < end; ++index)
#define RFOR(index, start, end) for(int index = start; index > end; --index)
#define FOREACH(itr, b) for(auto itr = b.begin(); itr != b.end(); ++itr)
#define RFOREACH(itr, b) for(auto itr = b.rbegin(); itr != b.rend(); ++itr)
#define db(x) cerr << #x << " = " << x << endl
#define db2(x, y) cerr << #x << " = " << x << ", " << #y << " = " << y << endl
#define db3(x, y, z) cerr << #x << " = " << x << ", " << #y << " = " << y << ", " << #z << " = " << z << endl
#define INF 1000000000
#define M 1000000007
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;


//---------------------------------------------------------------------------------------------------------------

bool visited[100005];
int d[100005];
int main(){
    int n, m;
    cin >> n >> m;
    queue<int> q;
    q.push(n);
    visited[n] = true;
    d[n] = 0;
    while(!q.empty()){
        int x = q.front();
        if (x == m) break;
        q.pop();
        if (x > 0) {
            if (!visited[x - 1]){
                visited[x - 1] = true;
                q.push(x - 1);
                d[x - 1] = d[x] + 1;
            }
        }
        if (2 * x < 100000){
            if (!visited[2 * x]){
                visited[2 * x] = true;
                q.push(2 * x);
                d[2 * x] = d[x] + 1;
            }
        }
    }
    cout << d[m] << endl;
}

