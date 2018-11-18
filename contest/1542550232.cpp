#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    int h, m, s, l1, l2;
    cin >> h >> m >> s >> l1 >> l2;

    l1 *= 5;
    l2 *= 5;
    h  *= 5;

    enum Type
    {
        I, Target, Strelka
    };

    vector<pair<int, Type>> times = {
        {l1, I      },
        {l2, Target },
        {h,  Strelka},
        {m,  Strelka},
        {s,  Strelka}
    };

    sort(times.begin(), times.end());

    size_t strelkasCnt = 0;
    bool doCount = false;

    for (auto&& p : times)
    {
        if (p.second == Strelka && doCount)
            ++strelkasCnt;
        else if (p.second == I || p.second == Target)
            doCount = !doCount;
    }

    if (strelkasCnt % 3 == 0)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
