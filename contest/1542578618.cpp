#include <bits/stdc++.h>
using namespace std;
#define fo(i,a,b) for (int i = (a); i < (b); i++)
#define FO(i,a,b) for (int i = (a); i < (b); i++)
#define pb push_back
#define eb emplace_back
#define sz(v) int(v.size())
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;

#define N 205
#define L 13

int n, ex[N][L][1<<L], cnt[N][L], len[N];
char buf[N];
int rd[N];
int pref[N][L], suff[N][L];
int m;
int main() {
    scanf("%d", &n);
    fo(i,0,n) {
        scanf("%s", buf);
        int m = strlen(buf);
        len[i] = m;
        fo(j,0,m) rd[j] = buf[j]-'0';
        fo(j,0,m) {
            int cur = 0;
            fo(ln,1,L) {
                if (j+ln > m) continue;
                cur = 2*cur + rd[j+ln-1];
                ex[i][ln][cur] = 1;
//                printf("%d %d %d\n", i, ln, cur);
                if (j==0) pref[i][ln] = cur;
                if (j+ln == m) suff[i][ln] = cur;
            } 
        }
    }
    scanf("%d", &m);
    fo(i,0,m) {
        int a,b;
        scanf("%d %d", &a, &b); a--; b--;
 //       printf("merge %d\n", i);
        int at = n+i;
        fo(l,1,L) fo(j,0,1<<l) ex[at][l][j] = (ex[a][l][j] | ex[b][l][j]);
        fo(sl,1,min(L,len[a]+1)) fo(pl,1,min(L,len[b]+1)) {
            if (sl + pl >= L) continue;
            int val = suff[a][sl]*(1<<pl) + pref[b][pl];
   //         printf("%d\n", val);
            ex[at][pl+sl][val] = 1;
        }
        fo(l,1,min(L,len[a]+1)) pref[at][l] = pref[a][l];
        fo(l,len[a]+1,min(L,len[a]+len[b]+1)) {
            pref[at][l] = pref[a][len[a]]*(1<<(l-len[a])) + pref[b][l-len[a]];
        }
        fo(l,1,min(L,len[b]+1)) suff[at][l] = suff[b][l];
        fo(l,len[b]+1,min(L, len[a]+len[b]+1)) {
            suff[at][l] = suff[a][l-len[b]]*(1<<(len[b])) + suff[b][len[b]];
        }
        len[at] = min(L, len[a]+len[b]);
        fo(j,1,L) {
            int g = 1;
            fo(k,0,1<<j) if (!ex[at][j][k]) g = 0;
            if (!g) {
                printf("%d\n", j-1); break;
            }   
        }
    }

    return 0;
}
