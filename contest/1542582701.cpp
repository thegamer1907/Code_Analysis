#include<bits/stdc++.h>
#define PII pair<int,int>
#define PIII pair< pair<int, int>, int>
#define X first
#define Y second
#define MP make_pair
#define N 100010
#define M 200010
#define ll long long
using namespace std;

int read()
{
    int x = 0, f = 1; char ch = getchar();
    while(ch < '0' || ch > '9') {if(ch == '-') f = -1; ch = getchar();}
    while(ch >= '0' && ch <= '9') {x = x * 10 + ch - '0'; ch = getchar();}
    return x * f;
}
int n, k, x;
int ans[20], vis[20], hui[10];
int cnt;
bool flag;

int main(){
//    freopen("in.txt","r",stdin);
    scanf("%d%d", &n, &k);
    for(int i = 1; i <= n; i ++)
    {
        int tmp = 0;
        for(int j = 1; j <= k; j ++)
        {
            scanf("%d", &x);
            tmp = tmp * 2 + x;
        }
        if(!vis[tmp]) vis[tmp] = 1, ans[cnt ++] = tmp;
    }
    for(int i = 1; i < (1 << cnt); i ++)
    {
        int num = 0;
        for(int j = 0; j < k; j ++) hui[j] = 0;
        for(int j = 0; j < cnt; j ++)
        {
            if((1 << j) & i) num ++;
            else continue;
            for(int x = 0; x < k; x ++)
            {
                if((1 << x) & ans[j]) hui[x] ++;
            }
        }
        flag = 1;
        for(int j = 0; j < k; j ++) if(hui[j] * 2 > num) flag = 0;
        if(flag) break;
    }
    if(flag) printf("YES\n");
    else printf("NO\n");
    return 0;
}
