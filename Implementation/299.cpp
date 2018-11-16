#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void f(int tl, int tr, int l, int r)
{

}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);

    ll n, a, b;
    cin >> n >> a >> b;
    a--, b--;
    int ans = -1;
    for (int i = 0; i <= 10; ++i)
    {
        int st = (1 << i);
        //cout << st << " " << a / st << " " << b/st << endl;
        if (a / st == b/st)
        {
            ans = i;
            break;
        }
    }
    if ((1 << ans) == n)
    {
        cout << "Final!";
        return 0;
    }
    cout << ans;
    return 0;
}
