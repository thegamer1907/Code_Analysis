#include<bits/stdc++.h>
using namespace std;
 
int read(){
    int x=0,f=1;char c=getchar();
    while(c<'0'||c>'9'){if(c=='-')f=-1;c=getchar();}
    while(c>='0'&&c<='9')x=(x<<3)+(x<<1)+(c^48),c=getchar();
    return x*f;
}
 
int main(){
    int N=read();
    if(N%4==0||N%4==3||N%4==1)
        printf("%d A",N%4==0?(1):((N%4==3)?(2):(0)));
    else
        printf("1 B");
    return 0;
}