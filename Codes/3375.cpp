#include <cstdio>
#include <algorithm>

using namespace std;


long long n;

bool check(long long x){
    long long now = n;
    long long sum = 0;
    while(now){
        if(now<x){
            sum+=now;
            now=0;
        }
        else{
            sum+=x;
            now-=x;
        }
        now-=now/10;
    }
    if(sum*2>=n)return true;
    return false;
}

int main (){
    scanf("%lld",&n);
    long long l=0,r=n;
    while(l+1!=r){
        auto mid = (l+r)/2;
        if(check(mid))r=mid;
        else l=mid;
    }
    printf("%lld\n",r);
}
