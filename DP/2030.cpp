#include <bits/stdc++.h>
using namespace std;

const int M = 1e5 + 7;
int a[M], tree[M], q[M], res[M];
bool ok[M];

struct query{
    int val, pos;
} qry[M];

bool way(query q1, query q2){
    return q1.val > q2.val;
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i = 1; i <= n; i++){
        scanf("%d", a + i);
    }

    for(int i = 0; i < m; i++){
        scanf("%d",&qry[i].val);
        qry[i].pos = i;
    }

    sort(qry, qry + m, way);

    int cnt = 0;
    int idx = 0;
    for(int i = n; i > 0; i--){
        if(!ok[a[i]]){
            ok[a[i]] = 1;
            cnt++;
        }

        while(qry[idx].val == i){
            res[qry[idx].pos] = cnt;
            idx++;
        }
    }

    for(int i = 0; i < m; i++)
        printf("%d\n", res[i]);

    return 0;
}
