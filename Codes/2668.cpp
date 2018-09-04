#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string.h>
#include <limits.h>
#include <cfloat>
#include <stack>
#include <queue>
#include <list>
#include <set>
#include <map>
#include <bitset>
#include <cassert>
#include <unordered_map>
#include <unordered_set>
using namespace std;
#define mem(flag) memset(flag,0,sizeof(flag))
#define Mem(flag) memset(flag,-1,sizeof(flag))
#define read(a) a=getInt()
#define En printf("\n")
#define P(a) printf("%d ",a)
#define Pn(a) printf("%d\n",a)
#define dbg(x) cout << (#x) << " = " << (x) << endl
#define rep(flag, a, b) for (int flag = (a); flag <= (b); ++flag)
#define Rep(flag, a, b) for (int flag = (a); flag >= (b); --flag)

const int MAX = 1e6 + 20;
char s[MAX];
int pi[MAX], mxt[MAX], z[MAX];

void z_function(char s[], int n, int z[]) {
    int l = -1, r = -1;
    z[0] = 0;
    for (int i = 1; i < n; i++) {
        if (i == 1 || i > r) {
            int j = 0, tmpi = i;
            while (tmpi < n && s[tmpi] == s[j]) tmpi++, j++;
            if (tmpi - 1 > r) l = i, r = tmpi - 1;
            z[i] = j;
        } else {
            int len = r - i + 1, j = i - l;
            if (z[j] < len) z[i] = z[j];
            else if (z[j] > len) z[i] = len;
            else {
                int j = len, tmpi = r + 1;
                while (tmpi < n && s[tmpi] == s[j]) tmpi++, j++;
                if (tmpi - 1 > r) l = i, r = tmpi - 1;
                z[i] = j;
            }
        }
    }
}
void computePrefixFunction(char p[], int plen, int pi[]) {
    int m,k,q;
    m=plen;
    pi[1]=0;
    k=0;
    for(q=2;q<=m;q++) {
        while(k>0&&p[k]!=p[q - 1])
            k=pi[k];
        if(p[k]==p[q - 1])
            k++;
        pi[q]=k;
    }
    for (int i = 0; i < m; i++) {
        pi[i] = pi[i + 1];
    }
}

int main() {
    scanf("%s", s);
    int slen = strlen(s);
    computePrefixFunction(s, slen, pi);
    z_function(s, slen, z);
    for (int pos = slen - 2; pos >= 1; pos--) {
        if (pos == slen - 2) mxt[pos] = pi[pos];
        else mxt[pos] = max(mxt[pos + 1], pi[pos]);
    }
    int mxlen = min(slen - 2, pi[slen - 1]);
    int ans = INT_MIN;
    for (int l = 1; l <= mxlen; l++) {
        if (z[slen - l] == l) {
            int tmp1 = mxt[l];
            if (tmp1 >= l) {
                if (l > ans) ans = l;
            }
        }
    }
    if (ans == INT_MIN) printf("Just a legend\n");
    else {
        for (int i = 0; i < ans; i++) printf("%c", s[i]); En;
    }
    return 0;
}


