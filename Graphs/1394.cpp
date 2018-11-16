#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> c[30001];

bool dfs(int p2)
{
    if (p2 == 0)
        return true;

    for (int i = 0; i < c[p2].size(); i++)
    {
        if (dfs(c[p2][i]))
            return true;
    }
    return false;
}

int main()
{
    unsigned int n, t;
    cin >> n >> t;
    t -= 1;
    for (int i=0; i<n-1; ++i)
    {
        int p;
        cin >> p;
        c[i+p].push_back(i);
    }

    bool ans = dfs(t);

    if (ans)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
