#include<bits/stdc++.h>
typedef long long lnt;
bool cou(lnt n,lnt t){
    lnt a=0,b=0;
    lnt x=n;
    while(x!=0){
        if(x<t){
            a+=x;
            x=0;
            break;
        }
        else{
            a+=t;
            x-=t;
        }
        lnt r=x/10;
        b+=r;
        x-=r;
    }
    if(2*a>=n) return true;
    return false;
}
int main(){
    lnt n;
    scanf("%lld",&n);
    lnt l=1,r=n;
    while(l!=r){
        lnt m=(l+r)/2;
        if(cou(n,m)) r=m;
        else l=m+1;
    }
    printf("%lld\n",r);
}