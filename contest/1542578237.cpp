/* ***********************************************************************
    > File Name: codeforces.cpp
    > Author: Key
    > Mail: keyld777@gmail.com
    > Created Time: Sat 17 Jun 2017 10:27:02 PM CST
 ********************************************************************** */

#include <bits/stdc++.h>
#define ll long long

int cnt[20], m;

bool dfs(int pos, int num, int ary[])
{
    //printf("%d\n", num);
    //for (int i = 0; i < m; i++)
    //printf("%d ", ary[i]);
    //puts("");
    bool flag = true;
    for (int i = 0; i < m; i++)
        if (ary[i] > num / 2)
            flag = false;
    if (flag)
        return true;
    if (pos + 1 < (1 << m) && dfs(pos + 1, num, ary))
        return true;
    for (int i = pos + 1; i < (1 << m); i++) {
        if (cnt[i]) {
            for (int j = 0; j < m; j++)
                if ((i & (1 << j)))
                    ary[m - j - 1]++;
            if (dfs(i, num + 1, ary))
                return true;
            for (int j = 0; j < m; j++)
                if ((i & (1 << j)))
                    ary[m - j - 1]--;
        }
    }
    return false;
}

int main()
{
    int n;
    int ary[6];
    scanf("%d %d", &n, &m);
    while (n--) {
        int num = 0;
        for (int i = 0, tmp; i < m; i++) {
            scanf("%d", &tmp);
            num = num * 2 + tmp;
        }
        cnt[num]++;
    }
    bool flag = false;
    for (int i = 0; i < (1 << m); i++)
        if (cnt[i]) {
            memset(ary, 0, sizeof ary);
            for (int j = 0; j < m; j++)
                if ((i & (1 << j)))
                    ary[m - j - 1] = 1;
            if (dfs(i, 1, ary)) {
                flag = true;
                break;
            }
        }
    puts(flag ? "YES" : "NO");
    return 0;
}

/*
using namespace std;

int t1, t2;

bool judge(int l, int r)
{
    return l < t1 && t2 < r;
}

int main()
{
    int h, m, s;
    scanf("%d %d %d %d %d", &h, &m, &s, &t1, &t2);
    h *= 60 * 60, m *= 60 * 60, s *= 60 * 60;
    //if (t1 == 12)
        //t1 = 0;
    //if (t2 == 12)
        //t2 = 0;
    //if (h == 12)
        //h = 0;
    if (t2 < t1)
        swap(t1, t2);
    t1 *= 5 * 3600, t2 *= 5 * 3600;
    m = m + s / 60;
    h = h * 5 + m / 60 * 5;
    //printf("%d %d %d\n", h, m, s);
    int l = min(h, min(m, s)), r = max(h, max(h, s)), mid = h + m + s - l - r;
    if (judge(l, mid) || judge(mid, r) || judge(r, l + 3600 * 60))
        puts("YES");
    else
        puts("NO");
    return 0;
}
*/
