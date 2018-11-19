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
  //  freopen("../data.in","r", stdin);
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    string pw;
    while(cin >> pw) {
        cin >> N;
        bool a = false,b = false;
        for(int i = 0; i < N; i++) {
            string s;
            cin >> s;
            if(s[1]==pw[0]) a = true;
            if(s[0]==pw[1]) b = true;
            if(s==pw) a = b = true;
        }
        if(a&&b) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
