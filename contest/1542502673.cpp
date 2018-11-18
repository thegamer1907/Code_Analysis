#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

typedef long long LL;
typedef pair<char, int > PCI;
typedef pair<int, int> PII;
typedef pair<LL, LL> PLL;
const int MAX = 2e5+7;
const int INF = 0x3f3f3f3f;
int N, M, K;
int a[MAX],last[MAX],room[MAX];


int main() {
//    freopen("../data.in","r", stdin);
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int h,m,s,t1,t2;
    while(cin >> h >> m >> s >> t1 >> t2) {
        h*=5; t1*=5; t2*=5;
        if(h == 60) h = 0;
        if(t1 == 60) t1 = 0;
        if(t2 == 60) t2 = 0;
        if(t1 > t2) t1^=t2^=t1^=t2;
        int cnt = 0;
        if(t1 <= h && h < t2) cnt ++;
        if(t1 <= m && m < t2) cnt ++;
        if(t1 <= s && s < t2) cnt ++;
        if(cnt == 0 || cnt == 3) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
