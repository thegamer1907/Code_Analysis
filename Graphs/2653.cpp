#include<bits/stdc++.h>
using namespace std;
const int MXN = 1e4 + 10;
int n, r, c, P[MXN];
int Find(int nd)
{
    if (P[nd] < 0)
        return (nd);
    return (P[nd] = Find(P[nd]));
}
void Unite(int nd, int nt)
{
    nd = Find(nd);
    nt = Find(nt);
    if (nd == nt)
        return ;
    if (P[nt] < P[nd])
        nd ^= nt, nt ^= nd, nd ^= nt;
    P[nd] -= (P[nd] == P[nt]);
    P[nt] = nd;
}
int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        P[i] = -1;
    for (int i = 1; i <= n; i++)
        scanf("%d", &r), Unite(i, r);
    for (int i = 1; i <= n; i++)
        if (P[i] < 0)
            c ++;
    return printf("%d", c), 0;
}
