#include <bits/stdc++.h>

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fr(i, n) for(int i = 0; i < n; ++i)
#define fr_o_n(i, n) for(int i = 1; i <= n; ++i)
#define fr_o(i, n) for(int i = 1; i < n; ++i)
#define inp(arr, n) for (int i = 0; i < n; cin >> arr[i++])
#define inp_table(arr, n, m) for (int i = 0; i < n; ++i) for (int j = 0; j < m; cin >> arr[i][j++]);
#define ignore ios_base::sync_with_stdio();fr(i, 14883228) { cin.ignore(); cin.ignore();}
#define w() while(true)
#define ret return 0;
#define ll long long

using namespace std;

struct point {
    long double x, y;

    point() {
        x = 0;
        y = 0;
    }

    bool operator==(const point &b) {
        return x == b.x and y == b.y;
    }

    point(long double x1, long double y1) {
        x = x1;
        y = y1;
    }

    long double dist(point b) {
        return sqrt((b.x - x) * (b.x - x) + (y - b.y) * (y - b.y));
    }

    long double dist_kv(point b) {
        return ((b.x - x) * (b.x - x) + (y - b.y) * (y - b.y));
    }

    bool point_on_sig(point &a, point &b) {
        return abs(a.dist(b) - (dist(a) + dist(b))) <= 1e-6;
    }

    long double polar_angle() {
        long double alpha = atan2(y, x);
        long double pi = 3.141592654;
        if (alpha < 0) alpha += 2 * pi;
        return alpha;
    }
};

struct line {
    long double A, B, C;

    line() {
        A = 0;
        B = 0;
        C = 0;
    }

    line(point &a, point &b) {
        A = a.y - b.y;
        B = b.x - a.x;
        C = -A * a.x - B * a.y;
    }

    line(long double a, long double b, long double c) {
        A = a;
        B = b;
        C = c;
    }

    line line_perp_dan_cherez_point(point a) {
        return line(-B, A, -(A * a.y) + B * a.x);
    }

    bool onli(point a) {
        return A * a.x + B * a.y + C == 0;
    }

    point intersect_lines(line &a) {
        point p;
        p.x = -(((C * a.B) - (a.C * B)) / ((A * a.B) - (a.A * B)));
        p.y = -(((A * a.C) - (a.A * C)) / ((A * a.B) - (a.A * B)));
        return p;
    }

    bool intersect(line &b) {
        return A * b.B - B * b.A != 0;
    }

    bool operator==(line &a) {
        return A == a.A && B == a.B && C == a.C;
    }

    long double distance_perpendicular(point &d) {
        return abs(A * d.x + B * d.y + C) / (sqrt(A * A + B * B));
    }
};

struct vc {
    long double x, y;

    vc() {
        x = 0;
        y = 0;
    }

    vc(long double x_, long double y_) {
        x = x_;
        y = y_;
    }

    vc(const point &a) {
        x = a.x;
        y = a.y;
    }

    vc minus(const vc &b) {
        return vc(x - b.x, y - b.y);
    }

    long double len() {
        return sqrt(x * x + y * y);
    }

    long double scalar(const vc &b) {
        return x * b.x + y * b.y;
    }

    long double vector(const vc &b) {
        return x * b.y - y * b.x;
    }

    long double angle(const vc &b) {
        return atan2(vector(b), scalar(b));
    }
};

vector<int> top;

void top_sort(int v, vector<int> nodes[], int used[], int colors[]) {
    if (colors[v] == 1) {
        cout << -1;
        exit(0);
    } else if (colors[v] == 0) colors[v] = 1;
    fr(i, nodes[v].size()) {
        if (used[nodes[v][i]] == 0)
            top_sort(nodes[v][i], nodes, used, colors);
    }
    top.push_back(v + 1);
    used[v] = 1;
    colors[v] = 2;
}

vector<int> z_function(string s) {
    vector<int> z(s.size());
    for (int i = 1, l = 0, r = 0; i < s.size(); ++i) {
        if (i <= r)
            z[i] = min(r - i + 1, z[i - l]);
        while (i + z[i] < s.size() && s[z[i]] == s[i + z[i]])
            ++z[i];
        if (i + z[i] - 1 > r)
            l = i, r = i + z[i] - 1;
    }
    return z;
}

vector<int> p_function(string s) {
    vector<int> p(s.size());
    for (int i = 1; i < s.size(); ++i) {
        int j = p[i - 1];
        while (j > 0 && s[i] != s[j])
            j = p[j - 1];
        if (s[i] == s[j]) ++j;
        p[i] = j;
    }
    return p;
}

vector<int> now_ans;

void dfs(int v, vector<int> nodes[], int colors[], int turn) {
    if (colors[v] == 1) {
        now_ans.push_back(0);
        return;
    } else if (colors[v] == 0) colors[v] = 1;
    fr(i, nodes[v].size()) {
        if (turn == 1)
            dfs(nodes[v][i], nodes, colors, 2);
        else
            dfs(nodes[v][i], nodes, colors, 1);
    }
    if (nodes[v].empty()) {
        now_ans.push_back(turn);
        return;
    }
    colors[v] = 2;
}

//long long t1[8 * 100000];
//long long t2[8 * 100000];
//
//
//void build (long long a[], int v, int tl, int tr) {
// if (tl == tr) {
// t1[v] = a[tl];
// t2[v] = a[tl];
// }
// else {
// int tmtm = (tl + tr) / 2;
// build (a, v*2, tl, tmtm);
// build (a, v*2+1, tmtm+1, tr);
// t1[v] = min(t1[v*2], t1[v*2+1]);
// t2[v] = max(t2[v*2], t2[v*2+1]);
// }
//}
//
//long long mini (int v, int tl, int tr, int l, int r) {
// if (l > r)
// return LONG_LONG_MAX;
// if (l == tl && r == tr)
// return t1[v];
// int tmtm = (tl + tr) / 2;
// return min( mini(v*2, tl, tmtm, l, min(r,tmtm)), mini(v*2+1, tmtm+1, tr, max(l,tmtm+1), r));
//}
//
//long long maxi (int v, int tl, int tr, int l, int r) {
// if (l > r)
// return -LONG_LONG_MAX;
// if (l == tl && r == tr)
// return t2[v];
// int tmtm = (tl + tr) / 2;
// return max(maxi(v*2, tl, tmtm, l, min(r,tmtm)), maxi(v*2+1, tmtm+1, tr, max(l,tmtm+1), r));
//}
//void sett(int v, int idx, int x, int l, int r){
// if(l == r){
// t1[v] = x;
// t2[v] = x;
// return;
// }
// int m = l + r >> 1;
// if(l <= idx and m >= idx){
// sett(2 * v, idx, x, l, m);
// }
// else sett(2 * v + 1, idx, x, m + 1, r);
// t1[v] = min(t1[2 * v], t1[2 * v + 1]);
// t2[v] = max(t2[2 * v], t2[2 * v + 1]);
//}

int parents[500000];

void create(int v) {
    parents[v] = v;
}

int find_parent(int v) {
    if (v == parents[v])
        return v;
    return parents[v] = find_parent(parents[v]);
}

void join(int a, int b) {
    int x = find_parent(a);
    int y = find_parent(b);
    if (x != y) {
        parents[x] = y;
    }
}

vector<int> manac(string s, int shift) {
    int l = 0;
    int r = -1;
    int n = s.size();
    vector<int> ans(n);
    for (int i = 1; i < n; i++) {
        int k = 0;
        if (i <= r) {
            k = min(r - i + shift, ans[r - i + l + shift]);
        }
        while (i - k - 1 >= 0 && i + k + 1 - shift < n && s[i - k - 1] == s[i + k + 1 - shift]) {
            k++;
        }
        if (i + k - shift > r) {
            l = i - k;
            r = i + k - shift;
        }
        ans[i] = k;
    }
    return ans;
}

long long INF = (long long) 1e20;

long long dividers_num(int x) {
    long long ans = 0;
    for (int i = 1; i <= sqrt(x); ++i) {
        if (x % i == 0) ans += 2;
        if (i == sqrt(x)) --ans;
    }
    return ans;
}

ll max_arr(ll arr[], ll n) {
    ll maxi = -INF;
    fr(i, n) maxi = max(maxi, arr[i]);
    return maxi;
}

ll min_arr(ll arr[], ll n) {
    ll maxi = INF;
    fr(i, n) maxi = min(maxi, arr[i]);
    return maxi;
}

struct triple {
    ll a, b, c;

    triple(ll x, ll y, ll z) {
        a = x;
        b = y;
        c = z;
    }

    triple() {
        a = 0;
        b = 0;
        c = 0;
    }

    bool operator<(const triple *x) {
        return a < x->a;
    }

    bool operator==(const triple *x) {
        return a == x->a and b == x->b and c == x->c;
    }

    bool operator>(const triple *x) {
        return a > x->a;
    }
};

ll mark(long double kek){
    if(kek >= 4.5) return 5;
    if(kek < 2.5) return 2;
    if(kek >= 2.5 and kek < 3.5) return 3;
    return 4;
}

int main() {
    ll n;
    cin >> n;
    ll l = 1, r = n, ans = n;
    while(l <= r){
        ll mid = (l + r) / 2, now = n, kek = 0;
        while(now > 0){
            kek += min(mid, now);
            now -= mid;
            now -= now / 10;
        }
        if(n % 2 == 0){
            if(kek >= n / 2) {
                ans = min(ans, mid);
                r = mid - 1;
            }
            else l = mid + 1;
        }
        else{
            if(kek > n / 2) {
                ans = min(ans, mid);
                r = mid - 1;
            }
            else l = mid + 1;
        }
    }
    cout << ans;
}