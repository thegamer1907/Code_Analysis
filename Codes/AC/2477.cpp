#include <bits/stdc++.h>

using namespace std;

#define MAX 10000007
int cnt[MAX];
int val[MAX];
bool prime[MAX];

void gen()
{
    memset(prime, true, sizeof prime);
    memset(val, 0, sizeof val);
    for(int i=2; i<MAX; i++){
        if(prime[i]){
            val[i] += cnt[i];
            for(int j=2*i; j<MAX; j+=i){
                prime[j] = false;
                val[i] += cnt[j];
            }
        }
    }
    for(int i=1; i<MAX; i++){
        val[i] += val[i-1];
    }
}

int main()
{
    memset(cnt, 0, sizeof cnt);
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        int x;
        scanf("%d", &x);
        cnt[x]++;
    }
    gen();
    int m;
    scanf("%d", &m);
    for(int i=0; i<m; i++){
        int l, r;
        scanf("%d %d", &l, &r);
        r = min(r, 10000000);
        if(l > r){
            printf("0\n");
            continue;
        }
        int res = val[r] - val[l-1];
        printf("%d\n", res);
    }
}
