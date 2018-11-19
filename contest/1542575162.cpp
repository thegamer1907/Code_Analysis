#include <bits/stdc++.h>
     
using namespace std;

const int N = 14;

struct Node {
    Node *L = 0, *R = 0;
};

Node *copy(Node *a) {
    if (!a) return 0;
    Node *r = new Node();
    r->L = copy(a->L);
    r->R = copy(a->R);
    return r; 
}

Node *merge(Node *a, Node *b)  {
    if (!a) return copy(b);
    if (!b) return copy(a);
    Node *r = new Node();
    r->L = merge(a->L, b->L);
    r->R = merge(a->R, b->R);
    return r;
}

Node *push(Node *a, int pt, int pte, const string &s) {
    if (!a) a = new Node();
    if (pt >= (int)s.size() || pt >= pte) {
        return a;
    }
    if (s[pt] == '0') a->L = push(a->L, pt + 1, pte, s);
    else a->R = push(a->R, pt + 1, pte, s);
    return a;
}

int cur[N + 1];

void getAns(Node *x, int p) {
    if (!x) return ;//(void) (cout << "End\n");
    cur[p]++;
    // cout << "L : \n";
    getAns(x->L, p + 1);
    // cout << "R : \n";
    getAns(x->R, p + 1);
    // cout << "END\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<string> xb, xe;
    vector<Node *>x;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        xb.push_back(s);
        xe.push_back(s);
        x.push_back(new Node());
        for (int i = 0; i < s.size(); ++i) x.back() = push(x.back(), i, i + N, s);
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        --a;
        --b;
        // cout << a << ' ' << b << endl;
        Node *z = merge(x[a], x[b]);
        xe.push_back(xe[a] + xb[b]);
        for (int j = 0; j < xe[i + n].size(); ++j) {
            z = push(z, j, j + N, xe[i + n]);
        }
        xe[i + n] = xe[a] + xe[b];
        // cout << xe[i + n] << endl;
        x.push_back(z);
        xb.push_back(xb[a] + xb[b]);
        xb[i + n].resize(min((int)xb[i + n].size(), N));
        if (xe[i + n].size() > N) {
            for (int j = 0; j < N; ++j) {
                xe[i + n][j] = xe[i + n][xe[i + n].size() - N + j];
            }
            xe[i + n].resize(N);
        }
        memset(cur, 0, sizeof cur);
        getAns(z, 0);
        int ans = 0;
        for (int i = 0; i <= N; ++i) {
            // cout << cur[i] << endl;
            if (cur[i] == (1 << i)) ans = i;
        }
        cout << ans  << endl;

    }
    return 0;
}