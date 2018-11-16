#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int n, m, D[20000];

int main()
{
    cin >> n >> m;
    queue<int> Q;
    Q.push(n);
    while (!Q.empty())
    {
        int k = Q.front();
        Q.pop();
        if (k == m)
        {
            cout << D[k];
            return 0;
        }
        if (k * 2 < 20000 && !D[k * 2])
            Q.push(k * 2), D[k * 2] = D[k] + 1;
        if (k && !D[k - 1])
            Q.push(k - 1), D[k - 1] = D[k] + 1;
    }
}
