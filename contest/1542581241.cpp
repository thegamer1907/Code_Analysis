#include <bits/stdc++.h>

using namespace std;

const int K = 13;

string reduce(string a) {
    return a.substr(0, min(int(a.size()), K));
}

string reduce_reverse(string a) {
    reverse(a.begin(), a.end());
    a = reduce(a);
    reverse(a.begin(), a.end());
    return a;
}

class Info {
public:
    Info() {
        memset(a, 0, sizeof(a));
        start = "";
        last = "";
    }

    Info(const string &s) {
        memset(a, 0, sizeof(a));
        for (int l = 1; l < K; l++) {
            for (int k = 0; k + l <= s.size(); ++k) {
                int mask = 0;
                for (int it = 0; it < l; it++) {
                    mask |= (s[k + it] == '1') << it;
                }
                a[l][mask] = 1;
            }
        }
        start = reduce(s);
        last = reduce_reverse(s);
    }
    string start, last;
    bool a[K][1 << K];

    int ans() {
        for (int i = K - 1; i >= 0; i--) {
            bool flag = true;
            for (int j = 0; j < (1 << i) && flag; ++ j) {
                flag &= a[i][j];
            }
            if (flag) return i;
        }
        return false;
    }
    friend Info operator +(const Info& a, const Info& b) {
        Info c;
        for (int l = 1; l < K; l++) {
            for (int mask = 0; mask < (1 << l); mask++) {
                c.a[l][mask] = a.a[l][mask] | b.a[l][mask];
            }
        }
        if (a.start.size() >= K) {
            c.start = a.start;
        } else {
            c.start = reduce(a.start + b.start);
        }
        if (b.last.size() >= K) {
            c.last = b.last;
        } else {
            c.last = reduce_reverse(a.last + b.last);
        }
        for (int i = 0; i < a.last.size(); i++) {
            for (int j = 0; j < b.start.size(); j++) {
				if (a.last.size() - i + j + 1 >= K) {
					continue;
				}
                int mask = 0, l = 0;
                for (int k = i; k < a.last.size(); k++) {
                    mask |= (a.last[k] == '1') << l;
                    l++;
                }
                for (int k = 0; k <= j; k++) {
                    mask |= (b.start[k] == '1') << l;
                    l++;
                }
                c.a[l][mask] = 1;
            }
        }
        return c;
    }
};

int n;

int main() {
    scanf("%d", &n);
    vector<Info> infos;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        Info info = Info(s);
        infos.push_back(info);
    }
    int m;
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        a--, b--;
        infos.push_back(infos[a] + infos[b]);
        printf("%d\n", infos.back().ans());
    }
    return 0;
}
