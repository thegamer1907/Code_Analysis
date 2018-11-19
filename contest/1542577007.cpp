#include<bits/stdc++.h>
#define PII pair<int,int>
#define PIII pair< pair<int, int>, int>
#define X first
#define Y second
#define MP make_pair
#define N 210
#define M 20010
#define ll long long
using namespace std;

int read()
{
    int x = 0, f = 1; char ch = getchar();
    while(ch < '0' || ch > '9') {if(ch == '-') f = -1; ch = getchar();}
    while(ch >= '0' && ch <= '9') {x = x * 10 + ch - '0'; ch = getchar();}
    return x * f;
}

int n, m;
int suf[N][N], pre[N][N], cnts[N], cntp[N];
set<int> s[N][N];
int size[N][N];
char ss[N];
int mi[N];
const int P = 20;

int main(){
    //freopen("in.txt","r",stdin);
    mi[0] = 1;
    for(int i = 1; i <= P; i ++) mi[i] = mi[i - 1] * 2;
    scanf("%d", &n);
    for(int i = 1; i <= n; i ++)
    {
        scanf("%s", ss);
        int l = strlen(ss);
        for(int x = 0; x < l; x ++)
        {
            int tmp = 0;
            for(int j = x; j < l; j ++)
            {
                //tmp = tmp << 1;
                //if(ss[j] - '0') tmp[0] = 1;
                //tmp = (tmp << 1) | (ss[j] - '0' ? 1 : 0);
                tmp = (tmp << 1) + ss[j] - '0';
                s[i][j - x + 1].insert(tmp);
            }
        }
        cntp[i] = min(l, P);
        for(int j = 0; j < min(l, P); j ++)
            pre[i][j] = ss[j] - '0';
        cnts[i] = min(l, P);
        for(int j = l - 1; j >= max(0, l - P); j --)
            suf[i][l - 1 - j] = ss[j] - '0';
    }
//    for(int i = 1; i <= n; i ++)
//    {
//        for(int j = 1; j <= 15; j ++)
//        {
//            if(!s[i][j].size()) continue;
//            printf("%d %d: ", i, j);
//            for(auto x : s[i][j])
//                printf("%d ", x);
//            printf("\n");
//        }
//    }
//    for(int i = 1; i <= n; i ++)
//    {
//        printf("%d: ",i);
//        for(int j = 0; j < cntp[i]; j ++)
//            printf("%d ", pre[i][j]);
//        printf("\n");
//        for(int j = 0; j < cnts[i]; j ++)
//            printf("%d ", suf[i][j]);
//        printf("\n");
//    }
    scanf("%d", &m);
    for(int i = 1; i <= m; i ++)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        //printf("%d %d\n", x, y);
        for(int j = 1; j <= P; j ++)
        {
            for(auto a : s[x][j])
                s[i + n][j].insert(a);
            for(auto a : s[y][j])
            {

                s[i + n][j].insert(a);
//                if(i == 1 && j == 2) printf("%d why\n", a);
            }
        }

        for(int j = 0; j < cnts[x]; j ++)
        {
            for(int k = 0; k < cntp[y]; k ++)
            {
                if(k + j + 2 > P) continue;
                int tmp = 0;
                for(int l = j; l >= 0; l --)
                {
                    tmp = (tmp << 1) | suf[x][l];
                    //tmp = (tmp << 1) | suf[x][l];
                }
                for(int l = 0; l <= k; l ++)
                {
                    tmp = (tmp << 1) | pre[y][l];
                    //if(pre[x][l]) tmp[0] = 1;
                    //tmp = (tmp << 1) | pre[x][l];
                }
                s[i + n][k + j + 2].insert(tmp);
//                if(i == 1) printf("%d %daa\n", k + j + 2, tmp);
            }
        }
        //printf("a\n");
        cntp[i + n] = cntp[x];
        for(int j = 0; j < cntp[x]; j ++) pre[i + n][j] = pre[x][j];
        for(int j = 0; j < cntp[y] && cntp[i + n] < P; j ++) pre[i + n][cntp[i + n] ++] = pre[y][j];
        cnts[i + n] = cnts[y];
        for(int j = 0; j < cnts[y]; j ++) suf[i + n][j] = suf[y][j];
        for(int j = 0; j < cnts[x] && cnts[i + n] < P; j ++) suf[i + n][cnts[i + n] ++] = suf[x][j];
//        for(int j = 1; j <= 15; j ++)
//        {
//            if(!s[i + n][j].size()) continue;
//            printf("%d %d: ", i + n, j);
//            for(auto x : s[i + n][j])
//                printf("%d ", x);
//            printf("\n");
//        }
        int ans;
        for(int j = 1; j <= P; j ++)
        {
            if(s[i + n][j].size() != mi[j]) { ans = j - 1; break; }
        }
        printf("%d\n", ans);
    }
    return 0;
}
