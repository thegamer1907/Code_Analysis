#include <iostream>
#include <string.h>
#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <string>
#include <math.h>
using namespace std;
const int maxn = 1e5+10;

long long t;
int m;long long n,k;

int main(){
    scanf("%lld %d %lld",&n,&m,&k);
    long long place = 1;
    long long tot = 0,ref = 0,ans = 0;
    for(int i = 1;i <= m;i ++){
        scanf("%lld",&t);
        t -= ref;
        if(place*k - t >= 0)
            tot ++;
        else{
            ref += tot;
            if(tot) ans ++;
            t -= tot;
            tot = 0;
            place = t/k;
            if(place*k < t) place ++;
            if(place*k - t >= 0) tot ++;
        }
    }if(tot) ans ++;

    printf("%lld\n",ans);
    //system("pause");
    return 0;
}