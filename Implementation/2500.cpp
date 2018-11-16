#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
char s[105];
int main(void){
    scanf("%s",&s);
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9'){
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}
