#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#define eprintf(...) fprintf(stderr, __VA_ARGS__)
#define print_var(x) cerr << #x << " = " << x << endl
#define print_array(arr, len) {cerr << #arr << " = "; for (int i = 0; i < len; i++) cerr << arr[i] << " "; cerr << endl;}
#define print_iterable(it) {cerr << #it << " = "; for (const auto &e : it) cerr << e << " "; cerr << endl;}
#else
#define eprintf(...) (void)0
#define print_var(x) (void)0
#define print_array(arr, len) (void)0
#define print_iterable(it) (void)0
#endif

using ll = long long;
const int N = 205;
const int K = 18;
const int SZ = 1 << K;

char buf[N];
string scan_token()
{
    scanf("%s", buf);
    return buf;
}

struct Status
{
    bitset<SZ> has[K + 1];
    pair<int, int> ptr;

    Status(): has(), ptr({1, 0}) {}

    void add(int mask, int len)
    {
        has[len][mask] = true;
        move_ptr();
    }

    void move_ptr()
    {
        while (ptr.first <= K)
        {
            while (ptr.second < (1 << ptr.first) && has[ptr.first][ptr.second])
                ptr.second++;
            if (ptr.second == (1 << ptr.first))
            {
                ptr.first++;
                ptr.second = 0;
            }
            else
                break;
        }
    }

    void build(const string& s)
    {
        for (int i = 0; i < (int)s.length(); i++)
        {
            int mask = 0;
            for (int j = i; j < (int)s.length(); j++)
            {
                mask = 2 * mask + (s[j] - '0');
                add(mask, j - i + 1);
                if (j - i + 1 == K)
                    break;
            }
        }
    }

    Status operator+(const Status& o) const
    {
        Status res;
        for (int len = 0; len <= K; len++)
            res.has[len] = has[len] | o.has[len];
        res.ptr = max(ptr, o.ptr);
        res.move_ptr();
        return res;
    }

    int get_ans() const
    {
        return ptr.first - 1;
    }
};

int n, m;
string str[N];
Status status[N];

void solve()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        str[i] = scan_token();
        status[i].build(str[i]);
    }

    scanf("%d", &m);
    for (int it = 0; it < m; it++)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        a--, b--;

        status[n] = status[a] + status[b];
        str[n] = str[a] + str[b];

        for (int i = max(0, (int)str[a].length() - K); i < (int)str[a].length(); i++)
        {
            int mask = 0;
            for (int j = i; j < (int)str[n].length(); j++)
            {
                mask = 2 * mask + (str[n][j] - '0');
                status[n].add(mask, j - i + 1);
                if (j - i + 1 == K)
                    break;
            }
        }

        printf("%d\n", status[n].get_ans());

        if ((int)str[n].length() > 2 * K)
            str[n] = str[n].substr(0, K) + str[n].substr((int)str[n].length() - K);
        n++;
    }
}

int main()
{
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
#endif

    solve();

    eprintf("\n\ntime = %.3lf\n", (double)clock() / CLOCKS_PER_SEC);
}
