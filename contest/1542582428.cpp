#include <bits/stdc++.h>

int vis[12340] ;

int main()
{
    int a , b , c , t1 ,t2 ;
    memset(vis,0,sizeof vis) ;
    scanf("%d %d %d %d %d",&a,&b,&c,&t1,&t2) ;
    a = a%12*5 ;
    a *= 10 ;
    if(b > 0 || c >0)
        a += 1 ;
    vis[a] ++ ;
    b *= 10 ;
    if(c > 0)
        b += 1 ;
    vis[b] ++ ;
    c *= 10 ;
    vis[c] ++ ;
    t1 *= 5 ;
    t2 *= 5 ;
    t1 %= 60 ;
    t2 %= 60 ;
    t1 *= 10 ;
    t2 *= 10 ;
    if(t1 > t2)
        std::swap(t1,t2) ;
    int num = 0 ;
    for(int i = t1 ; i <= t2 ; i ++)
        num += vis[i] ;
    if(num == 0 || num == 3)
        printf("YES\n") ;
    else
        printf("NO\n") ;
    return 0 ;
}
