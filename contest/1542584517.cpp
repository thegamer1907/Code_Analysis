#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,m,s,t1,t2;
    scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
    double H,M,S,T1,T2;
    if(h==12) h=0;
    S=s*6;
    M=m*6+S/60;
    H=h*30+M/60;
    if(t1==12) t1=0;
    if(t2==12) t2=0;
    T1=t1*30,T2=t2*30;
    if(T1>T2) swap(T1,T2);
    int ans=0;
    if(S>=T1&&M>=T1&&H>=T1&&S<=T2&&M<=T2&&H<=T2) ans=1;
    if(((S<=360&&S>=T2)||(S>=0&&S<=T1))&&((M<=360&&M>=T2)||(M>=0&&M<=T1))&&((H<=360&&H>=T2)||(H>=0&&H<=T1))) ans=1;
    printf("%s\n",ans?"YES":"NO");
    return 0;
}
