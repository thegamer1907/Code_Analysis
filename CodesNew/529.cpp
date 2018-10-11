#include <bits/stdc++.h>
using namespace std;

#define N 10010000

typedef  long long lo;
lo cnt[N], acc[N];
bool c[N];

int main() {
	ios_base::sync_with_stdio(false);
    // cout.setf(ios_base::unitbuf);
	// freopen("input.txt","r",stdin);
	// freopen("jacks_candy_shop.txt","w",stdout);
    
    lo n, INF = 1e7+5;
    scanf("%I64d", &n);

    for (lo i = 0;i<n; i++) {
        lo val;
        scanf("%I64d", &val);
        cnt[val]++;
        
    }
    // cerr << "mec";
    
    for (lo i = 2;i<INF;i++) 
        if (!c[i]){
            acc[i]+=cnt[i];
            // cerr << "inside";
            for (lo j = 2*i;j<INF;j+=i) {
                // if (j %10000==0)
                    // cerr << "j "<< j;
                c[j] = true;
                acc[i]+=cnt[j];
            }
        }
    
    for (lo i = 1;i<INF;i++){
        acc[i] += acc[i-1];
        // if (i < 20) 
            // cerr << i << " " << acc[i] << "\n";
    }


    lo m;
    scanf("%I64d", &m);
    for (lo i = 0;i<m;i++) {
        lo l, r;
        scanf("%I64d %I64d", &l, &r);
        l = min(l, INF-1);
        r = min(r, INF-1);
        printf("%I64d\n", (acc[r] - acc[l-1]));
    }
    
    
    
    return 0;
}
