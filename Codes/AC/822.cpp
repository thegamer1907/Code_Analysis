#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,k;
    scanf("%lld%lld",&n,&k);
    for(long long int i=0;;i++){
        if(k&(1LL<<i)){
            printf("%lld",i+1);
            return 0;
        }
    }
    return 0;
}