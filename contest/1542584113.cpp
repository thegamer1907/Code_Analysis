#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int s[16];
int solve(){
    if(s[0]){
        return 1;
    }
    int ok=0;
    for(int i=1;i<=8;i++){
        if(s[i]==0){
            continue;
        }
        for(int j=1;j<16;j++){
            if((i&j)!=0){
                continue;
            }
            if(s[j]){
                ok=1;
            }
        }
    }
    return ok;
}
int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++){
        int state=0;
        int t;
        for(int j=0;j<k;j++){
            scanf("%d",&t);
            state = state*2+t;
        }
        s[state]=1;
    }
    int ans = solve();
    printf(ans?"YES\n":"NO\n");
    return 0;
}
