#include <bits/stdc++.h>

using namespace std;

string a[210];
bool h[20000];
int res[20000];
int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m;
    scanf("%d", &m);
    for(int i = 0; i < m; i++)
    {
        int l, r;
        scanf("%d%d", &l, &r);
        l--, r--;
        a[n + i] = a[l] + a[r];
        if(a[n+i].length()>1000) a[n+i]=a[n+i].substr(0,500)+a[n+i].substr(a[n+i].length()-500,500);
        int len = a[n + i].size();
        int ans = 0;
        for(int j = 1; j < 15; j++)
        {
            memset(h, 0, sizeof(h));
            int temp = 0;
            int ss = 1 << (j - 1);
            for(int k = 0; k < len; k++)
            {
                if(k + 1 <= j)
                {
                    temp <<= 1;
                    temp += a[n + i][k] - '0';
                }
                else
                {
                    //cout << temp << endl;
                    h[temp] = true;
                    temp ^= (ss * (a[n + i][k - j] - '0'));
                    temp <<= 1;
                    temp += a[n + i][k] - '0';
                }
            }
            h[temp] = true;
            bool flag = true;
            for(int k = 0; k < ss * 2; k++)
            {
                if(!h[k])
                {
                    flag = false;
                    break;
                }
            }
            if(flag)
                ans = j;
            else
                break;
        }
        res[n + i] = max(max(res[l], res[r]), ans);
        printf("%d\n", res[n + i]);
    }
    return 0;
}
