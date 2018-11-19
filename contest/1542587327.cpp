#include <bits/stdc++.h>
using namespace std;

int n,r,l;
char str[5], act[5];

int main(){
    scanf("%s",str);
    scanf("%d",&n);
    while(n--){
        scanf("%s",act);
        if(act[0]==str[1])
            r++;
        if( act[1]==str[0])
            l++;
        if(act[0]==str[0] && act[1] == str[1]){
            l++;
            r++;
        }
    }
    if(r!=0 && l!=0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
