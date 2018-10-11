#include<cstdio>//CF991C
#include<iostream>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstdlib>

using namespace std;

long long n;

bool can(long long u){
    long long lft=n,v=0,p=0;
    while(lft){
        if(lft<u){
            v+=lft;
            lft=0;
        }
        else{
            v+=u;
            lft-=u;
        }
        long long rep=lft/10;
        p+=rep;
        lft-=rep;
    }
    if(v>=p){
        return true;
    }
    return false;
}

long long bs(long long l,long long r){
    if(l==r){
        return l;
    }
    long long mid=(l+r)>>1;
    if(can(mid)){
        return bs(l,mid);
    }
    else{
        return bs(mid+1,r);
    }
}

int main(){
    scanf("%lld",&n);
    printf("%lld\n",bs(1,n));
    return 0;
}
