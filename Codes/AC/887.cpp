#include <bits/stdc++.h>

using namespace std;

const int N = 100005;
char s[N];

int main()
{
    int n, k;
    scanf("%d %d\n%s", &n, &k, s);
    int l = 0, r = 0, mx = 0, temp = k;
    while (r < n)
    {
        while (r < n && (k || s[r] == 'a'))
        {
            if (s[r++] == 'b')
            {
                k--;
            }
        }
        mx = max(mx, r - l);
        while (l <= r && !k)
        {
            if (s[l++] == 'b')
            {
                k++;
            }
        }
    }
    l = 0, r = 0, k = temp;
    while (r < n)
    {
        while (r < n && (k || s[r] == 'b'))
        {
            if (s[r++] == 'a')
            {
                k--;
            }
        }
        mx = max(mx, r - l);
        while (l <= r && !k)
        {
            if (s[l++] == 'a')
            {
                k++;
            }
        }
    }
    printf("%d", mx);
    return 0;
}
