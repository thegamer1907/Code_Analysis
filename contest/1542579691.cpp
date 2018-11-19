#include <bits/stdc++.h>
using namespace std;

int d[2][2][2][2];
int p[5], q[5], a[5];
struct on {
    int id, h;
    bool operator < (const on &A) const {
        return h > A.h;
    }
}no[5];
int st[5];

void slove(int w, int e, int r, int t) {
    int cnt = 0;
    for (int i = 1; i >= 0; i--) {
        for (int j = 1; j >= 0; j--) {
            for (int k = 1; k >= 0; k--) {
                for (int l = 1; l >= 0; l--) {
                    st[no[1].id] = i;
                    st[no[2].id] = j;
                    st[no[3].id] = k;
                    st[no[4].id] = l;
                    if (d[st[1]][st[2]][st[3]][st[4]]) {
                        d[st[1]][st[2]][st[3]][st[4]]--;
                        if (st[1])  q[1]--;
                        if (st[2])  q[2]--;
                        if (st[3])  q[3]--;
                        if (st[4])  q[4]--;
                        return ;
                    }
                }
            }
        }
    }
}

int main () {
    memset (d, 0, sizeof d);
    memset (q, 0, sizeof q);
    int n, k;
    scanf ("%d%d", &n, &k);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            scanf ("%d", &p[j]);
            if (p[j])   q[j]++;
        }
        d[p[1]][p[2]][p[3]][p[4]]++;
    }
//    for (int i = 1; i <= 4; i++) {
//        cout << q[i] << endl;
//    }
    int num = n;
    while (num) {
        bool flag = true;
        for (int i = 1; i <= 4; i++) {
//            cout << q[i] << " " << num << endl;
            if (q[i] * 2 > num) flag = false, a[i] = 1;
            else    a[i] = 0;
        }
        if (flag)   break;
        for (int i = 1; i <= 4; i++) {
            no[i].id = i;
            no[i].h = q[i];
        }
        sort (no + 1, no + 5);
        slove(no[1].id, no[2].id, no[3].id, no[4].id);
        num--;
    }
//    cout << num << endl;
    if (num == 0)   printf("NO\n");
    else            printf("YES\n");
    return 0;
}
/*
0 0 0 0
0 0 0 1
0 0 1 0
0 0 1 1
0 1 0 0
0 1 0 1
0 1 1 0
0 1 1 1
1 0 0 0
1 0 0 1
1 0 1 0
1 0 1 1
1 1 0 0
1 1 0 1
1 1 1 0
1 1 1 1

d[2][2][2][2]
d[0][0][0][0] > 0

d[16][num]
*/
