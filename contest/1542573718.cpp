#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int N = 110;
const int K = 7;

int n, m;
char s[N][N];
char tmp[N + N];
bool u[N + N][K][1 << K];
char fi[N + N][N], la[N + N][N];
int len[N + N];

int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%s", s[i]);
        for (int j = 0; s[i][j] && j < K; ++j)
            fi[i][j] = s[i][j];
        int ln = strlen(s[i]);
        int start = ln - K;
        if (start < 0) start = 0;
        while (start < ln) la[i][len[i]++] = s[i][start++];
        for (int ii = 1; ii < K; ++ii)
            for (int j = 0; j < ln - ii + 1; ++j)
            {
                int t = 0;
                for (int k = j; k < j + ii; ++k)
                    t = t * 2 + s[i][k] - '0';
                u[i][ii][t] = true;
            }
    }
    scanf("%d", &m);
    int num = n - 1;
    while (m--)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        --x; --y;
        ++num;
        for (int i = 1; i < K; ++i)
            for (int j = 0; j < (1 << i); ++j)
                u[num][i][j] = u[x][i][j] | u[y][i][j];
        int k = 0;
        for (int i = 0; la[x][i]; ++i)
            tmp[k++] = la[x][i];
        for (int i = 0; fi[y][i]; ++i)
            tmp[k++] = fi[y][i];
        tmp[k] = 0;
        for (int i = 1; i < K; ++i)
            for (int j = 0; j < k - i + 1; ++j)
            {
                int t = 0;
                for (int ii = j; ii < j + i; ++ii)
                    t = t * 2 + tmp[ii] - '0';
                u[num][i][t] = true;
            }
        int fk = 0;
        for (fk = 0; fi[x][fk]; ++fk)
            fi[num][fk] = fi[x][fk];
        for (int i = 0; fi[y][i] && fk < K; ++i)
            fi[num][fk++] = fi[y][i];
        fi[num][fk] = 0;
        int lk = 0;
        if (len[y] < K)
        {
            int start = len[x] - K + len[y];
            if (start < 0) start = 0;
            while (start < len[x])
                la[num][lk++] = la[x][start++];
        }
        for (int i = 0; la[y][i]; ++i)
            la[num][lk++] = la[y][i];
        len[num] = lk;
        int r = 0;
        for (int i = K - 1; i >= 0; --i)
        {
            bool f = true;
            for (int j = 0; j < (1 << i); ++j)
                f &= u[num][i][j];
            if (f)
            {
                r = i;
                break;
            }
        }
        printf("%d\n", r);
    }

    return 0;
}