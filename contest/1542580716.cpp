//created by missever

#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef pair<int,int> P;

const int mod = 1e9 + 7;
const int maxn = 4096;

struct node {
    char l[20],r[20];
    bitset<maxn> v[13];
    void init() {
        for(int i = 1; i <= 12; i++) v[i].reset();
    }
} f[205];

char s[205];

int main() {
#ifdef CX_TEST
    freopen("E:\\program--GG\\test_in.txt", "r", stdin);
#endif
    int n,m,q,i,j,k,r,x,a,b;
    scanf("%d",&n);
    for(i = 1; i <= n; i++) {
        scanf("%s",s);
        m = strlen(s);
        f[i].init();
        for(j = 1; j <= 12; j++) {
            for(k = 0; k + j <= m; k++) {
                for(x = r = 0; r < j; r++) x = x << 1 | (s[k + r] - '0');
                f[i].v[j][x] = 1;
            }
        }
        if(m < 13) {
            memcpy(f[i].l,s,m);
            memcpy(f[i].r,s,m);
        } else {
            memcpy(f[i].l,s,12);
            memcpy(f[i].r,s + m - 12,12);
        }
    }
    scanf("%d",&q);
    for(int cas = 1; cas <= q; cas++) {
        scanf("%d%d",&a,&b);
        f[n + cas].init();
        for(i = 1; i <= 12; i++) f[n + cas].v[i] = f[a].v[i] | f[b].v[i];
        m = strlen(f[a].r);
        memcpy(s,f[a].r,m);
        x = strlen(f[b].l);
        memcpy(s + m,f[b].l,x);
        m += x;
        s[m] = 0;
       // cout<<s<<endl;
        for(j = 1; j <= 12; j++) {
            for(k = 0; k + j <= m; k++) {
                for(x = r = 0; r < j; r++) x = x << 1 | (s[k + r] - '0');
                f[n + cas].v[j][x] = 1;
            }
        }
        //cout<<cas<<endl;
        for(j = 12; j > 0; j--) {
            //cout<<j<<" "<<f[n + cas].v[j].count()<<endl;
            if((int)f[n + cas].v[j].count() == (1 << j)) break;
        }
        printf("%d\n",j);
        if(strlen(f[a].l) == 12) memcpy(f[n + cas].l,f[a].l,12);
        else {
            if(m < 13) memcpy(f[n + cas].l,s,m);
            else memcpy(f[n + cas].l,s,12);
        }
        if(strlen(f[b].r) == 12) memcpy(f[n + cas].r,f[b].r,12);
        else {
            if(m < 13) memcpy(f[n + cas].r,s,m);
            else memcpy(f[n + cas].r,s + m - 12,12);
        }
    }
    return 0;
}
