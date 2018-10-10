#include <map>
#include <queue>
#include <string>
#include <math.h>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
long long n;
int judge(long long k){
    long long u,v,tmp,sum1,sum2;
    tmp=n;
    sum1=sum2=0;
    while(tmp){
        u=k;
        if(tmp>=u){
            tmp-=u;
            sum1+=u;
        }
        else{
            sum1+=tmp;
            tmp=0;
        }
        v=(long long)(tmp/10.0);
        if(tmp>=v){
            tmp-=v;
            sum2+=v;
        }
        else{
            sum2+=tmp;
            tmp=0;
        }
    }
    if(sum1>=sum2)
    return 1;
    return 0;
}
int main(){
    long long l,r,ans,mid;
    while(scanf("%I64d",&n)!=EOF){
        l=1,r=n;
        while(l<=r){
            mid=(l+r)/2;
            if(judge(mid)){
                ans=mid;
                r=mid-1;
            }
            else
            l=mid+1;
        }
        printf("%I64d\n",ans);
    }
    return 0;
}
