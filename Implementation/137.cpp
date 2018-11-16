#include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;

int a, b, n;

int get_(int l, int r, int x)
{
    if (r - l == 1)
        return l;
    int w1 = get_(l, (l + r) / 2, x - 1);
    int w2 = get_((l + r) / 2, r, x - 1);
    int ans;
    if (w1 == a || w1 == b)
        ans = w1;
    else if (w2 == b || w2 == a)
        ans = w2;
    else
        ans = max(w1, w2);
    //cout << "game: " << w1 + 1 << " " << w2 + 1 << " win-" << ans + 1 << endl;
    if ((w1 == a && w2 == b) || (w1 == b && w2 == a))
    {
        if (x == (int)(log2((ld)n)))
            cout << "Final!\n";
        else
            cout << x << "\n";
        exit(0);
    }
    return ans;
}

int main()
{
    cin >> n >> a >> b; a--; b--;
    get_(0, n, (int)(log2((ld)n)));
    return 0;
}
