/*#include<bits/stdc++.h>
using namespace std;
#define MAX 500
#define mms(x) memset(x, 0, sizeof x)
int Step[4][2] = {1, 0, 0, 1, -1, 0, 0, -1};
int vis[MAX][MAX];
char a[MAX][MAX];
char b[MAX][MAX];
int x, n, m;
struct node
{
    int x, y, s;
} op, uv;
void bfs(int nx, int ny, int s)
{
    vis[nx][ny] = 1;
    op.x = nx;
    op.y = ny;
    op.s = 0;
    queue<node > q;
    q.push(op);
    while(!q.empty())
    {
        op = q.front();
        if(a[op.x][op.y] == 'E')
        {
            printf("Escaped in %d minute(s).\n", op.s);
            return;
        }
        q.pop();
        for(int i = 0; i < 4; i++)
        {
            uv.x = op.x + Step[i][0];
            uv.y = op.y + Step[i][0];
            if(uv.x >= 0 && uv.y >= 0 && uv.x < n && uv.y < m && a[uv.x][uv.y] != '#' && !vis[uv.x][uv.y])
            {
                uv.s = op.s + 1;
                vis[uv.x][uv.y] = 1;
                q.push(uv);
            }
        }
    }
    puts("Trapped!");
    return;
}
int main()
{
    while(scanf("%d%d%d", &x, &n, &m) != EOF && x && n && m)
    {
        for(int i = 0; i < n; i++)
        {
            scanf("%s", a[i]);
        }
        for(int k = 1; k < x; k++)
        {
            for(int i = 0; i < n; i++)
            {
                scanf("%s", b[i]);
                for(int j = 0; j < m; j++)
                    if(b[i][j] == '.' || b[i][j] == 'E' || b[i][j] == 'S')
                        a[i][j] = b[i][j];
            }
        }
        int xx, yy;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                if(a[i][j] == 'S')
                {
                    xx = i;
                    yy = j;
                }
        mms(vis);
        bfs(xx, yy, 0);
    }
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
#define MAX 1500
char a[MAX][MAX], b[MAX][MAX];
int main()
{
    int n, m;
    while(scanf("%d%d", &n, &m) != EOF)
    {
        for(int i = 0; i < n; i++)
        {
            scanf("%s", a[i]);
        }
        int ch = 0;
        for(int i = 0; i < m; i++)
        {
            scanf("%s", b[i]);
            for(int j = 0; j < n; j++)
            {
                if(strcmp(a[j], b[i]) == 0)
                    ch++;
            }
        }
        if(n == m)
        {
            if(ch & 1)
                puts("YES");
            else
                puts("NO");
        }
        if(n > m)
            puts("YES");
        if(n < m)
            puts("NO");

    }return 0;}