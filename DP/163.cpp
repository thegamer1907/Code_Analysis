#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    int a, b;
    cin >> a;;
    int boys[101], girls[101];
    memset(boys, 0, sizeof boys);
    memset(girls, 0, sizeof girls);
    for (int i = 0; i < a; i++)
    {
        int entry;
        cin >> entry;
        boys[entry]++;
    }
    cin >> b;
    for (int i = 0; i < b; i++)
    {
        int entry;
        cin >> entry;
        girls[entry]++;
    }
    int res = 0;

    for (int i = 1; i <= 100; i++)
    {
        int toDel = 0;
        if (i - 1 >= 1)
        {
            toDel = min(boys[i], girls[i - 1]);
            boys[i] -= toDel;
            girls[i - 1] -= toDel;
            res += toDel;
        }
        toDel = min(boys[i], girls[i]);
        boys[i] -= toDel;
        girls[i] -= toDel;
        res += toDel;
        if (i + 1 <= 100)
        {
            toDel = min(boys[i], girls[i + 1]);
            boys[i] -= toDel;
            girls[i + 1] -= toDel;
            res += toDel;
        }
    }
    cout << res;
    return 0;
}