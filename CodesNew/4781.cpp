#include<bits/stdc++.h>
using namespace std;
const int MXN = 5e5 + 10;
int n, r, c, A[MXN];
int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    sort(A, A + n);
    for (int i = (n + 1) / 2; i < n; i++)
    {
        if (2 * A[r] <= A[i])
        {
            c ++;
            r ++;
        }
    }
    printf("%d", n - c);
    return (0);
}
