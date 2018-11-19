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
