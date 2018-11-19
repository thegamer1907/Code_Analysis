#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string.h>
#include<string>
#include<math.h>
#include<cstdlib>
#include<stdlib.h>
#include<queue>
#include<map>
#include<set>
#include<stack>
#include<bits/stdc++.h>
#define bug printf("*********\n");
#define mem0(a) memset(a, 0, sizeof(a));
#define mem1(a) memset(a, -1, sizeof(a));
#define finf(a, n) fill(a, a+n, INF);
#define in1(a) scanf("%d" ,&a);
#define in2(a, b) scanf("%d%d", &a, &b);
#define in3(a, b, c) scanf("%d%d%d", &a, &b, &c);
#define out1(a) printf("%d\n", a);
#define out2(a, b) printf("%d %d\n", a, b);
#define pb(G, a, b) G[a].push_back(b);
using namespace std;
typedef long long LL;
typedef pair<LL, pair<int, LL> > LLppar;
typedef pair<int, int> par;
typedef pair<LL, int> LLpar;
const int mod = 998244353;
const int INF = 1e9+7;
const int N = 1010;
const double pi = 3.1415926;

char ps[5];
int n;
char str[110][5], x[110], y[110];

int main(){
    int h, m, s, t1, t2;
    while(~scanf("%d%d%d", &h, &m, &s)) {
        scanf("%d%d", &t1, &t2);
        t1 %= 12;
        t2 %= 12;
        t1 *= 5;
        t2 *= 5;
        double a = 1.0*min(t1, t2);
        double b = 1.0*max(t1, t2);
        int flag1 = 1, flag2 = 1;
        h %= 12;
        h *= 5;
        double x = h, y = m, z = s;
        if(s > 0) y += 0.5;
        if(m > 0 || s > 0) x ++;
        //printf("%f %f %f %f %f\n", a, b, x, y, z);
        while(a != b) {
            if(a == x || a == y || a == z) flag1 = 0;
            a += 0.5;
            if(a == 60) a = 0;
        }
        a = 1.0*min(t1, t2);
        while(a != b) {
            if(b == x || b == y || b == z) flag2 = 0;
            b += 0.5;
            if(b == 60) b = 0;
        }
        if(flag1 || flag2) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

/*struct node
{
    int l;
    int r;
}e[200010], e1[200010];

bool cmp(node a, node b)
{
    return a.l < b.l;
}

bool cmp1(node a, node b)
{
    return a.r < b.r;
}

map<LL, int> m;
vector<int> vl, vr;
vector<int>::iterator it;

int main()
{
    int n;
    int sum[200010], a[200010];
    while(~scanf("%d", &n)) {
        m.clear();
        vr.clear();
        vl.clear();
        mem0(sum);
        int k = 0;
        for(int i = 0; i < n; i ++) {
            scanf("%d%d", &e[i].l, &e[i].r);
            e1[i].l = e[i].l;
            e1[i].r = e[i].r;
            if(m[e[i].l] < 2) {
                m[e[i].l] ++;
                a[k ++] = e[i].l;
            }
            if(!m[e[i].r] < 2) {
                m[e[i].r] ++;
                a[k ++] = e[i].r;
            }
        }
        m.clear();
        sort(e1, e1+n, cmp1);
        sort(e, e+n, cmp);
        sort(a, a+k);
        m[e[0].l] = 1;
        for(int i = 1; i < n; i ++) {
            vl.push_back(e[i].r);
            m[e[i].l] = vl.end() - lower_bound(vl.begin(), vl.end(), e[i].l);

            printf("---%d %d\n", e[i].l, m[e[i].l]);
        }
        for(int i = n-1; i >= 0; i --) {
            vr.push_back(e1[i].l);
            m[e1[i].r] = lower_bound(vr.begin(), vr.end(), e1[i].r) - vr.begin();
            printf("+++%d %d\n", e1[i].r, m[e1[i].r]);
        }
        for(int i = 1; i < k; i ++) {
            out1(min(m[a[i]], m[a[i-1]]));
            printf("%d %d\n", a[i], a[i-1]);
            int k = max(1, a[i] - a[i-1]);
            sum[min(m[a[i]], m[a[i-1]])] += k;
        }
        for(int i = 1; i <= n; i ++) {
            printf("%d ", sum[i]);
        }
        printf("\n");
    }
    return 0;
}*/
