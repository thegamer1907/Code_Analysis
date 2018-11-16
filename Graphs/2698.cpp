#include <bits/stdc++.h>

// limit
#define oo 2000000007
#define OO 10000000000000007LL
#define maxN 2007

// loop
#define fto(i, x, y) for(int i = (x); i <= (y); ++i)
#define fdto(i, x, y) for(int i = (x); i >= (y); --i)
#define ftoa(i, x, y, a) for(int i = (x); i <= (y); i += a)
#define fdtoa(i, x, y, a) for(int i = (x); i >= (y); i -= a)
#define ftosqrt(i, x, y) for(int i = (x); i*i <= (y); ++i)
#define ftoit(it, var) for (__typeof(var.begin()) it = var.begin(); it != var.end(); ++it)
#define fdtoit(rit, var) for (__typeof(var.rbegin()) rit = var.rbegin(); rit != var.rend(); ++rit)

// debug
#define debug cout << "*" << endl;
#define bug1d(a, x, y) { cout << #a << ": "; fto(_, x, y) cout << a[_] << ' '; cout << endl; }
#define bug2d(a, x, y, u, v) { cout << #a << ": " << endl; fto(i, x, y) {fto(j, u, v) cout << a[i][j] << ' '; cout << endl;}; cout << endl;}
#define bug(a) cout << #a << " = " << a << endl;
#define bug2(a, b) cout << #a << " = " << a << "; "; cout << #b << " = " << b << endl;
#define bug3(a, b, c) cout << #a << " = " << a << "; "; cout << #b << " = " << b << "; "; cout << #c << " = " << c << endl;

// operation
#define mp make_pair
#define pb push_back
#define pf push_front
#define mt make_tuple

// structure
#define ii pair<int, int>
#define vi vector<int>
#define vll vector<ll>
#define vii vector<ii>
#define matrix vector<vi>
#define iii tuple <int, int, int>
#define iiii tuple <int, int, int, int>

// get value
#define FF first
#define SS second
#define get(x, a) get<(x)>(a)

// data type
#define ll long long
#define ull unsigned long long

// function
#define lb lower_bound
#define ub upper_bound

// const value
#define pi 3.14159265358979323846264338327950288419716939937510

using namespace std;

int a[maxN][maxN], visited[maxN][maxN];
int n, m, k;
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

void DFS(int x, int y) {
    visited[x][y] = 1;
    --k;
    fto (i, 0, 3) {
        int u = x+dx[i];
        int v = y+dy[i];
        if (!visited[u][v] && a[u][v] && k) DFS(u, v);
    }

    return;
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("tmp.inp", "r", stdin);
        freopen("tmp.out", "w", stdout);
    #endif // ONLINE_JUDGE

    scanf("%d%d%d", &n, &m, &k);
    int cnt = 0;

    fto (i, 1, n) {
        string s;
        cin >> s;

        fto (j, 1, m) {
            a[i][j] = (s[j-1] == '.');
            cnt += a[i][j];
        }
    }

    k = cnt-k;
    fto (i, 1, n) {
        fto (j, 1, m) {
            if (a[i][j] && k && !visited[i][j]) DFS(i, j);
        }
    }

    fto (i, 1, n) {
        fto (j, 1, m) {
            if (visited[i][j]) printf(".");
            else if (a[i][j]) printf("X");
            else printf("#");
        }
        puts("");
    }

    return 0;
}