#include <bits/stdc++.h>
using namespace std;
int hp;
int mp;
int sp;
int h,m,s;
int t1,t2;
int t1p;
int t2p;
int a[50000];
int main(){
    scanf("%d %d %d %d %d",&h,&m,&s,&t1,&t2);
    int i;
    h%=12;
    t1%=12;
    t2%=12;
    hp=3600*h+60*m+s;
    mp=720*m+12*s;
    sp=720*s;
    t1p=3600*t1;
    t2p=3600*t2;
    a[hp]=1;
    a[mp]=1;
    a[sp]=1;
    a[t1p]=1;
    a[t2p]=1;
    if(t1p>t2p)swap(t1p,t2p);
    int isok=0;
    for(i=t1p+1 ; i<t2p ; i++){
        if(a[i])isok++;
    }
    if(isok==0){
        printf("YES");
        return 0;
    }
    isok=0;
    for(i=t2p+1 ; i<=43200 ; i++)
        if(a[i])isok++;
    for(i=0 ; i<t1p ; i++)if(a[i])isok++;
    if(isok==0){
        printf("YES");
    }
    else
        printf("NO");
    return 0;
}
