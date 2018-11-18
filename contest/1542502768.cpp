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
    while(~scanf("%s", ps)) {
        scanf("%d", &n);
        int flag = 0;
        for(int i = 0; i < n; i ++) {
            scanf("%s", str[i]);
            if(strcmp(str[i], ps) == 0) flag = 1;
            x[i] = str[i][0];
            y[i] = str[i][1];
        }
        for(int i = 0; i < n; i ++) {
            for(int j = 0; j < n; j ++) {
                if(y[i] == ps[0] && x[j] == ps[1]) flag = 1;
            }
        }
        if(flag) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}