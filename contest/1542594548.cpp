#include <bits/stdc++.h>
using namespace std;

char str[5], str2[5];
bool one = false, two = false;
int main(){
    int n;
    scanf("%s", str);
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s", str2);
        if(strcmp(str2, str) == 0){
            printf("YES\n");
            return 0;
        }else{
            if(str2[1] == str[0]){
                one = true;
            }
            if(str2[0] == str[1]){
                two = true;
            }
        }
        if(one && two){
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
}
