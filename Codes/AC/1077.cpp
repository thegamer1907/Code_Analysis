#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, d, m, s, Mmin=0, S=0, SMax=0, t=0;
    cin >> n >> d;
    vector <pair<int,int>> F;
    for (int i = 0; i < n; i++)
    {
        cin >> m >> s;
        F.push_back({m,s});
    }
    sort(F.begin(),F.end());
    Mmin = F[0].first;
    for (int i = 0; i < n; i++)
    {
        S += F[i].second;
        while (F[i].first - Mmin >= d)
        {
            Mmin = F[t+1].first;
            S -= F[t].second;
            t++;
        }
        SMax = max(S,SMax);
    }
    cout << SMax;
    return 0;
}
