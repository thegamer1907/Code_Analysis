#include <cstdio>
#include <cstring>
#include <iostream>
const int maxn = 1e5+9;
using namespace std;
int n,k;
char s[maxn];
int main(){
    scanf("%d%d%s",&n,&k,s+1);
    int ans = 0, tmp = k, l = 1;
    for(int i = 1; i <= n; i++){
        if(s[i] == 'b')tmp--;
        while(tmp<0){
            if(s[l++]=='b')tmp++;
        }
        ans = max(ans, i-l+1);
    }
    tmp = k; l = 1;
    for(int i = 1; i <= n; i++){
        if(s[i] == 'a')tmp--;
        while(tmp<0){
            if(s[l++]=='a')tmp++;
        }
        ans = max(ans, i-l+1);
    }
    printf("%d\n",ans);
    return 0;
}
