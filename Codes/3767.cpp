#include <bits/stdc++.h>

char str[200] ;
int H[3] , P[3] , OCC[200] , a[] = {'B','S','C'} ;
long long r ;

bool OK(long long x){
    long long arr[] = { x*OCC['B'] , x*OCC['S'] , x*OCC['C'] } , p = 0;
    for(int i=0;i<3;++i)
        if( arr[i] > H[i] ) p += 1ll * P[i] * (arr[i] - H[i]) ;
    return p<=r ;
}
long long solve(){
    long long st = 0 , en = 1e14 ;
    while( st < en ){
        long long mid = ( st + en + 1 ) / 2 ;
        if( OK(mid) ) st = mid ;
        else en = mid - 1 ;
    }
    return st;
}
int main(){
    scanf("%s",str);
    for(int i=0;str[i]!='\0';++i) ++OCC[str[i]] ;
    for(int i=0;i<3 && scanf("%d",H+i)==1;++i);
    for(int i=0;i<3 && scanf("%d",P+i)==1;++i);
    scanf("%lld",&r);
    printf("%lld\n",solve());
    return 0;
}
