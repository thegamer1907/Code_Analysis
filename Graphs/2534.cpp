#include <bits/stdc++.h>

using namespace std;

int f[10005];
int c[10005];
void solve(){
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        int a;
        scanf("%d",&a);
        f[i]=a;
    }
    for(int i=1;i<=n;i++){
        scanf("%d",&c[i]);
    }
    int ans=1;
    for(int i=2;i<=n;i++){
        if(c[i]!=c[f[i]]){
            ans++;
        }
    }
    printf("%d",ans);


    return;
}

int main(){
    solve();
    return 0;
}
