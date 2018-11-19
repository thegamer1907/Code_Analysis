#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+5;
int a[maxn][5], b[5];
int n, k, fac[5] = {1};
bool book[maxn];

void dfs(int cur, int num)
{
    if(cur > k)
    {
//        cout << b[1] << ' ' << b[2] << ' ' << b[3] <<' ' << num << endl;
        book[num] = 1;
        return ;
    }
    if(b[cur]) dfs(cur+1, num);
    else
    {
        dfs(cur+1, num);
        dfs(cur+1, num+fac[k-cur]);
    }
}

int main(void)
{
    for(int i = 1; i < 5; i++)
        fac[i] = fac[i-1]*2;
    while(cin >> n >> k)
    {
        memset(book, 0, sizeof(book));
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= k; j++)
                scanf("%d", &a[i][j]);
        int ok = 0;
        book[0] = 1;
        for(int i = 1; i <= n; i++)
        {
            int tmp = 0;
            for(int j = 1; j <= k; j++)
            {
                b[j] = a[i][j];
                tmp = tmp*2+a[i][j];
            }
            if(book[tmp]) ok = 1;
//            cout << "*" << tmp << ' ' << ok << endl;
            dfs(1, 0);
        }
        puts(ok ? "YES" : "NO");
    }
    return 0;
}
