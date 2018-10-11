#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<queue>
#include<map>
using namespace std;

int T, n, cnt, head[100010], m, k;

struct edge
{
    int end;
    int next;
}e[100010*2];

void add_edge(int u, int v)
{
    e[cnt].end = v;
    e[cnt].next = head[u];
    head[u] = cnt ++;
}

char str[510];

int main()
{
    while(~scanf("%d%d", &n, &m)) {
        int flag = 0, sum1 = 0, sum2 = 0, sum3 = 0;
        map<string, int> M;
        M.clear();
        for(int i = 0; i < n; i ++) {
            scanf("%s", str);
            M[str] = 1;
            sum1 ++;
        }
        for(int i = 0; i < m; i ++) {
            scanf("%s", str);
            if(!M[str]) {
                sum2 ++;
            }else sum3 ++;
        }
        sum2 += sum3/2;
        sum1 -= sum3/2;
        if(sum1 > sum2) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}