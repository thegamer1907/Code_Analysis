#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int ans=0,x=0;
    int kthval=0;
    for (int i=0; i<n; i++){
        scanf("%d",&x);
        //11,1,1,1,1,7,7,7,3
        if (x!=kthval && i>=m) break;
        x > 0 ? ++ans : ans;
        kthval=x;
        
    }
    printf("%d\n",ans);
}