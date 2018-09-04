#include <bits/stdc++.h>

using namespace std;


typedef long long ll;
#define rep(i, start, end) for(int i = start; i < end; ++i)
#define per(i, start, end) for(int i = (int)start-1; i >= end; --i)
#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(d, v) memset(d, v, sizeof(d))
const double PI = 3.14159265358979323846;
const double eps = (1e-9);

int dcmp(double x, double y)
{
    return fabs(x - y) <= eps ? 0 : x < y ? -1 : 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
//    freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    int a[100000];
    rep(i, 0, n)
        cin >> a[i];

    int time[100000] = {0};
    int minIdx = 0;
    rep(i, 0, n)
    {
//        int q = a[i];
//        time[i] = q/n;
//        q = q%n;
//        if (q > i)
//            time[i] += n;
//        else
//            time[i] += i;

        int q = a[i];
        time[i] += i;
        q -= i;
        time[i] += ((q + n - 1)/n)*n;

        if (time[i] < time[minIdx])
            minIdx = i;
    }

    cout << minIdx + 1 << endl;

    return 0;
}