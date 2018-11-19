#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
const int maxn = 105;
char t[maxn][5];
char s[3];
int main(){
    scanf("%s",s);
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",t[i]);
    }
    int ok=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(t[i][1]==s[0]&&t[j][0]==s[1]){
                ok=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(strcmp(s,t[i])==0){
            ok=1;
        }
    }
    printf(ok?"YES\n":"NO\n");
    return 0;
}
