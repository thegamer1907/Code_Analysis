#include<bits/stdc++.h>
#define LiangJiaJun main
#define INF 1999122700.1314
using namespace std;
int k;
int check(int x){
    int gege=0;
    while(x){
        gege+=x%10;
        x/=10;
        if(gege>10)return 0;
    }
    return gege==10;
}
int LiangJiaJun(){
    scanf("%d",&k);
    for(int i=1;;i++){
        if(check(i))k--;
        if(k==0)return printf("%d\n",i),0;
    }
    return 0;
}

