#include <bits/stdc++.h>
using namespace std;
int h,m,s,t1,t2,ok,j,j2,j3;
int main()
{
    cin>>h>>m>>s>>t1>>t2;
    int x=t1%12;
    t1%=12;
    t2%=12;
    if(s%5==0)
        j3=1;
    if(s==0 && m%5==0){
        j2=1;
    }
    if(s==0 && m==0){
        j=1;
    }
    s/=5;
    m/=5;
    h%=12;
  //  printf("%d %d %d %d %d %d\n",h,m,s,j,j2,j3);
    for(int i=0;i<=11;i++){
        int y=(t1+i)%12;
        if(y==s){
            if(y==t2 && !j3){
                printf("YES");
                return 0;
            }
            break;
        }
        if(y==m){
            if(y==t2 && !j2){
                printf("YES");
                return 0;
            }
            break;
        }
        if(y==h){
            if(y==t2 && !j){
                printf("YES");
                return 0;
            }
            break;
        }
        if(y==t2){
            printf("YES");
            return 0;
        }
    }
    for(int i=0;i<=11;i++){
        int z=(t1-i+12)%12;
   //     printf("z=%d\n",z);
        if(z==s && i!=0){
            break;
        }
        if(z==m && i!=0){
            break;
        }
        if(z==h && i!=0){
            break;
        }
        if(z==t2 && i!=0){
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}
// bitno je samo izmedju koja dva se nalazi
