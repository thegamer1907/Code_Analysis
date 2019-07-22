#include<stdio.h>
#include<queue>

const int MAX_M = 100100;

long long p[MAX_M];
long long dc;

int main(){
    long long n, m, k;
    scanf("%lld%lld%lld",&n, &m, &k);
    for(long long i = 0; i < m; ++i)
        scanf("%lld", p+i);
    long long used = 0, ans = 0;
    while(used < m){
        ans++;
        long long pus = used;

        while(p[used]-dc > k){
            if((p[used]-dc - k) % k)
                dc+=((p[used]-dc)/k)*k;
            else
                dc+=((p[used]-dc)/k-1)*k;
        }

        while(p[used]-dc <= k && used < m){
            used++;
        }

        dc += used-pus;
    }

    printf("%lld\n", ans);
}