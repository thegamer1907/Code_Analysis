#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <random>

using namespace std;


int n, m;

using ll = long long;
using ii = std::pair<int, int>;
using i3 = std::pair<ii, ii>;

const int MAXM = 128*1024;
const int MAXN = 128*1024;
const ll MAXW = 1000001;

struct Edge {
    int a, b, w;
};

struct Vdes {
    ll dist;
    int v;
    bool operator<(const Vdes& b) {
        if (dist != b.dist) return dist < b.dist;
        return v < b.v;
    }
    bool operator==(const Vdes& b) {
        return dist == b.dist && v == b.v;
    }
};

struct TreapVert {
    Vdes data;
    uint32_t prior;
    TreapVert *left, *right;  
} treap[MAXN];

int freec;
TreapVert* freeV[MAXN];



Edge edges[MAXM*2];

ll best[MAXN];
int prevv[MAXN];

Edge* ebegin[MAXN];
Edge* eend[MAXN];
minstd_rand rgen(123321);

static TreapVert* getV() {
    return freeV[--freec];
}

static void freeVert(TreapVert* v) {
    freeV[freec++] = v;
}

void split(TreapVert *t, Vdes key, TreapVert* &l, TreapVert* &r) {
    if (!t)
        l = r = nullptr;
    else if (key < t->data)
        split(t->left, key, l, t->left), r = t;
    else
        split(t->right, key, t->right, r), l = t;
}

void insert (TreapVert* &t, TreapVert* it) {
    if (!t)
        t = it;
    else if (it->prior > t->prior)
        split(t, it->data, it->left, it->right), t = it;
    else 
        insert(it->data < t->data ? t->left : t->right, it);
}

void merge (TreapVert* & t, TreapVert* l, TreapVert* r) {
    if (!l || !r) {
        t = l ? l : r;
    } else if (l->prior > r->prior) {
        t = l, merge(l->right, l->right, r);
    } else {
        t = r, merge(r->left, l, r->left);
    }
}

void erase (TreapVert* & t, Vdes key) {
    if (t->data == key) {
        freeVert(t);
        merge(t, t->left, t->right);
    } else {
        erase(key < t->data ? t->left : t->right, key);
    }
}

std::vector<int> solve()
{
    std::sort(edges, edges+2*m, [](const Edge& a, const Edge& b){
        if (a.a != b.a) return a.a < b.a;
        return a.b < b.b;
    });
    Edge* f = edges;
    for (int i=1; i<=n; i++) {
        ebegin[i] = f;
        while (f < edges + m + m && f->a == i) f++;
        eend[i] = f;
        best[i] = -1;
    }
    prevv[n] = 0;

    freec = n;
    for (int i=0; i<freec; i++) {
        freeV[i] = &treap[i];
    }

    TreapVert* root = nullptr;
    best[1] = 0;
    auto fr = getV();
    *fr = {{0, 1}, rgen(), nullptr, nullptr};
    insert(root, fr);
    while (root) {
        auto front = root;
        while (front->left) front = front->left;
        ll dist = front->data.dist;
        int v = front->data.v;
        erase(root, front->data);
        for (auto it=ebegin[v]; it != eend[v]; it++) {
            int tg = it->b;
            ll tdis = dist + it->w;
            if (best[tg] == -1 || tdis < best[tg]) {
                if (best[tg] != -1) {
                    erase(root, {best[tg], tg});
                }
                best[tg] = tdis;
                prevv[tg] = v;
                auto newv = getV();
                *newv = {{tdis, tg}, rgen(), nullptr, nullptr};
                insert(root, newv);
            }
        }
    }
    std::vector<int> ans;
    if (prevv[n]) {
        int v = n;
        while (v != 1) {
            ans.push_back(v);
            v = prevv[v];
        }
        ans.push_back(1);
        std::reverse(ans.begin(), ans.end());
    }
    return ans;
}

int main()
{
    //freopen("cin", "r", stdin);
    std::ios::sync_with_stdio(false);
    while (std::cin >> n >> m) {
        for (int i=0; i<m; i++) {
            int a, b, w;
            std::cin >> a >> b >> w;
            edges[i] = {a, b, w};
            edges[i+m] = {b, a, w};
        }
        auto ans = solve();
        if (ans.empty()) {
            std::cout << "-1\n";
        } else {
            bool first = true;
            for (auto v : ans) {
                if (!first) std::cout << " ";
                std::cout << v;
                first = false;
            }
            std::cout << "\n";
        }
    }
}
