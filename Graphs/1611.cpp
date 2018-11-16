#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    int a[3*10007];
    scanf("%d%d",&n,&m);
    for(int i=1;i<n;i++){
        int x;
        scanf("%d",&a[i]);
    }
    int ans=1;
    while(ans<=n){
        if(ans==m){
            puts("Yes");
            return 0;
        }if(ans==n) break;
        ans+=a[ans];
        //
    }
    puts("NO");
    return 0;
}
