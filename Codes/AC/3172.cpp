/*Huyyt*/
#include<bits/stdc++.h>
#define mem(a,b) memset(a,b,sizeof(a))
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int dir[8][2] = {{0, 1}, {1, 0}, {0, -1}, { -1, 0}, {1, 1}, {1, -1}, { -1, -1}, { -1, 1}};
const int mod = 1e9 + 7, gakki = 5 + 2 + 1 + 19880611 + 1e9;
const int MAXN = 1e3 + 5, MAXM = 2e3 + 5, N = 2e5 + 5;
const int MAXQ = 100010;
/*int to[MAXM << 1], nxt[MAXM << 1], Head[MAXN], tot = 1;
inline void addedge(int u, int v)
{
        to[++tot] = v;
        nxt[tot] = Head[u];
        Head[u] = tot;
}*/
inline void read(int &v)
{
        v = 0;
        char c = 0;
        int p = 1;
        while (c < '0' || c > '9')
        {
                if (c == '-')
                {
                        p = -1;
                }
                c = getchar();
        }
        while (c >= '0' && c <= '9')
        {
                v = (v << 3) + (v << 1) + c - '0';
                c = getchar();
        }
        v *= p;
}
int num[100005];
int ans[100005];
int anser = INT_MAX;
int main()
{
        ios_base::sync_with_stdio(0);
        cin.tie(0);

        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
                cin >> num[i];
                if (i - 1 >= num[i])
                {
                        ans[i] = i - 1;
                }
                else
                {
                        ans[i] = ((num[i] - i) / n + 1) * n + i - 1;
                }
                //cout << ans[i] << " ";
        }
        int aim = -1;
        for (int i = 1; i <= n; i++)
        {
                if (ans[i] < anser)
                {
                        anser = ans[i];
                        aim = i;
                }
        }
        cout << aim << endl;
        return 0;
}
