#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
const int MAXN = 100;
char str[MAXN+10][MAXN+10], ps[MAXN+10];
int main(){
    scanf("%s", ps);
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
        scanf("%s", str[i]);
    for(int i=1;i<=n;i++){
        if(str[i][0] == ps[0] && str[i][1] == ps[1]){
            printf("YES\n");
            return 0;
        }
        for(int j=1;j<=n;j++){
            if(str[i][1] == ps[0] && ps[1] == str[j][0]){
                printf("YES\n");
                return 0;
            }
        }
    }
    printf("NO\n");

    return 0;
}
