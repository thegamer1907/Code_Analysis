#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
#include<set>
#include<algorithm>
#include<map>

using namespace std;

int main(void){
    char pas[10];
    scanf("%s",pas);
    int N;
    scanf("%d",&N);
    char str[10];
    bool isok = false;
    bool ac1 = false,ac2 = false;
    for(int i=1;i<=N;i++){
        scanf("%s",str);
        if(strcmp(str,pas) == 0)
            isok = true;
        if(str[0] == pas[1])
            ac1 = true;
        if(str[1] == pas[0])
            ac2 = true;
        if(ac1 && ac2)
            isok = true;
    }
    if(isok)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}