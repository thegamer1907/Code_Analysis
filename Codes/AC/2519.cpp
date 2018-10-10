#include <bits/stdc++.h>
#include <math.h>
#define pi acos(-1)
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const int maxn =1e7 + 10;
bool vis[maxn];
int b[maxn], sum[maxn];

void ini_prime()
{
    memset(vis, true, sizeof(vis));
    for(int i=2; i<=maxn; i++){
        if(!vis[i]) continue;
        sum[i] += b[i];
        for(int j=i*2; j<=maxn; j+=i){
            vis[j] = false;
            sum[i] += b[j];
        }
    }
    for(int i=2; i<maxn; i++) sum[i] += sum[i-1];
}

int main()
{
    memset(b, 0, sizeof(b));
    memset(sum, 0, sizeof(sum));
    int n, m, wrd;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &wrd);
        b[wrd]++;
    }
    ini_prime();
    scanf("%d", &m);
    while(m--){
        int l, r;
        scanf("%d%d", &l, &r);
        if(l>maxn) l = maxn-1;
        if(r>maxn) r = maxn-1;
        printf("%d\n", sum[r]-sum[l-1]);
    }
}
