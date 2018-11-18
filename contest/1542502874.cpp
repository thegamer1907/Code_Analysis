#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <bitset>
#include <cstdio>
#include <string>
#include <vector>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define bug printf("*********\n");
#define FIN freopen("in.txt", "r", stdin);
#define debug(x) cout <<"[" <<x <<"]" <<end;
#define IO ios::sync_with_stdio(false),cin.tie(0);


const int maxn = 1e5 + 7;
const double pi = acos(-1);
const int inf = 0x3f3f3f3f;
const ll INF = 0x3f3f3f3f3f3f3f3f;

int n;
char s[5], mp[107][5];
vector<int> v;

int main() {
//    FIN;
    scanf("%s", s);
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%s", mp[i]);
    }
    for(int i = 0; i < n; i++) {
        if(mp[i][0] == s[0] && mp[i][1] == s[1]) {
            puts("YES");
            return 0;
        }
    }
    for(int i = 0; i < n; i++) {
        if(mp[i][1] == s[0]) {
            v.push_back(i);
        }
    }
    if(v.size() <= 0) {
        puts("NO");
        return 0;
    }
    for(int i = 0; i < n; i++) {
        if(mp[i][0] == s[1]) {
            puts("YES");
            return 0;
        }
    }
    puts("NO");
    return 0;
}
