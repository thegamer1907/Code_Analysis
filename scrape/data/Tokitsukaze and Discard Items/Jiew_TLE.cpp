#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 5;
long long p[maxn];
int main() {
    long long n,m,k;
    scanf("%I64d %I64d %I64d",&n,&m,&k);
    for(int i = 1;i <= m;i++) {
        scanf("%I64d",&p[i]);
    }
    long K2 = k,pp = 1;
    long long ans = 0;
    long long i;
    if(p[pp]-K2 > k)
        K2 += (p[pp]-K2)/k * k;
    while(1) {
        int cc = 0;
        for(i = pp;p[i] <= K2 && i <= m;i++) {
            cc++;
        }
        if(cc != 0)
        	ans++;
        if(i > m) break;

        pp += cc;
        K2 += cc;
        
        	
        
        
        
        if(cc == 0) {
        	if(p[pp]-K2 > k)
        		K2 += (p[pp]-K2)/k * k;
        	else K2 += k;
        }
    }
    printf("%I64d",ans);
}