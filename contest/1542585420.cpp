#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
#define ll long long

int n;
char a,b;
char z[305][5];
int main()
{
    scanf("%c%c",&a,&b);
    scanf("%d",&n);
    getchar();
    int flag=0;
    for(int i=1;i<=2*n;i+=2){
        scanf("%s",z[i]);
        if(z[i][0]==a&&z[i][1]==b){
            flag=1;
        }
        z[i+1][0]=z[i][0];
        z[i+1][1]=z[i][1];
    }
    if(flag){
        printf("YES\n");
        return 0;
    }
    for(int i=1;i<=2*n;i++){
        for(int j=1;j<=2*n;j++){
            if(i==j)
              continue;
            if((z[i][1]==a&&z[j][0]==b)){
                printf("YES\n");
                return 0;
            }
        }
    }
    printf("NO\n");
    return 0;
}