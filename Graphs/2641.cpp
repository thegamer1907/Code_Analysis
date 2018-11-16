#pragma comment(linker, "/STACK:1024000000,1024000000")
#include <cstdio>
#include <string>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <cstring>
#include <set>
#include <queue>
#include <algorithm>
#include <vector>
#include <map>
#include <cctype>
#include <cmath>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#define debug() puts("++++");
#define freopenr freopen("in.txt", "r", stdin)
#define freopenw freopen("out.txt", "w", stdout)
using namespace std;

typedef long long LL;
typedef pair<int, int> P;
const int INF = 0x3f3f3f3f;
const double inf = 0x3f3f3f3f3f3f;
const double PI = acos(-1.0);
const double eps = 1e-8;
const int maxn = 1e4 + 5;
const int mod = 2000;
const int dr[] = {-1, 1, 0, 0};
const int dc[] = {0, 0, 1, -1};
const char *de[] = {"0000", "0001", "0010", "0011", "0100", "0101", "0110", "0111", "1000", "1001", "1010", "1011", "1100", "1101", "1110", "1111"};
int n, m;
const int mon[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
const int monn[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
inline bool is_in(int r, int c){
    return r >= 0 && r < n && c >= 0 && c < m;
}
int p[maxn];

int Find(int x){ return x == p[x] ? x : Find(p[x]); }
set<int> sets;

int main(){
    while(cin >> n){
        for(int i = 0; i <= n; ++i)  p[i] = i;
        for(int i = 1; i <= n; ++i){
            cin >> m;
            int x = Find(i);
            int y = Find(m);
            if(x != y)  p[y] = x;
        }
        sets.clear();
        for(int i = 1; i <= n; ++i)  sets.insert(Find(i));
        int t = sets.size();
        cout << t << endl;
    }
    return 0;
}