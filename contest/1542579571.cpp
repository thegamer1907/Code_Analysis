#include<bits/stdc++.h>
#define int long long

using namespace std;

const int maxN = 1e5;

int readInt ()
{
    bool minus = false;
    int result = 0;
    char ch;
    ch = getchar();
    while (true)
    {
        if (ch == '-') break;
        if (ch >= '0' && ch <= '9') break;
        ch = getchar();
    }
    if (ch == '-') minus = true;
    else result = ch-'0';
    while (true)
    {
        ch = getchar();
        if (ch < '0' || ch > '9') break;
        result = result*10 + (ch - '0');
    }
    if (minus)
        return -result;
    else
        return result;
}
int a[maxN + 1][6];
main() {

    int n = readInt(), k = readInt();
    set<int> st;
    vector<int> g;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= k; j++) {
            a[j][i] = readInt();
        }
        int x = 0, pw = 1;
        for(int j = k; j >= 1; j--) {
            x += a[j][i] * pw;
            pw <<= 1;
        }
        if(!st.count(x)) {
            g.push_back(x);
            st.insert(x);
        }
//        cout << x << endl;
    }
    int sz = st.size();
//    cout << sz << endl;
    for(int i = 1; i < (1 << sz); i++) {
        vector<int> p;
        int ones = 0;
        int tmp = i;
        while(tmp) {
            if(tmp & 1)
                ones++;
            tmp >>= 1;
        }
        for(int j = 0; j < sz; j++) {
            if((i & (1 << j))) {
                p.push_back(g[j]);
//                cout << j << " - " << g[j] << endl;
            }
        }
        bool yes = true;
        for(int j = 0; j < k; j++) {
            int cnt = 0;
            for(auto it : p) {
//                if(i == 5) {
//                    cout << p[j2] << " ";
//                }
                if((it & (1 << j)))
                    cnt++;
            }
//            if(i == 2) {
//                cout << ones << " " << cnt << endl;
//            }
//                cout << endl;
            if(cnt > ones / 2) {
                yes = false;
                break;
            }
        }
        if(yes) {
//            for(auto it : p) {
//                cout << it << " ! ";
//            }
//            cout << i << " - " << ones;
            puts("YES");
            return 0;
        }
    }
    puts("NO");
}
