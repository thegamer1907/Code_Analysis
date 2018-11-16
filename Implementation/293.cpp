#include<bits/stdc++.h>

#define forn(i, n) for(int i = 0; i < n; ++i)


using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
typedef double dd;
typedef long double ldd;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, a, b;

    cin >> n >> a >> b;
    --a;
    --b;
    queue<int> ma;
    for (int i = 0; i < n; i++)
    {
        ma.push(i);
    }
    int ans = 1;
    while(n != 2)
    {
        for (int i = 0; i < n / 2; i++)
        {
            int aa = ma.front();
            ma.pop();
            int bb = ma.front();
            ma.pop();
            if ((aa == a && bb == b) || (aa == b && bb == a))
            {
                cout << ans;
                return 0;
            }
            if (aa == a || aa == b)
                ma.push(aa);
            else
                ma.push(bb);
        }
        ++ans;
        n /= 2;
    }
    cout << "Final!";
    return 0;
}
