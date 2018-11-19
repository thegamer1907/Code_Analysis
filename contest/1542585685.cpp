#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int n;
char ans[5],a[110][5];
int main(){
    scanf("%s",ans);
        scanf("%d",&n);

    for(int i=0;i<n;i++) scanf("%s",a[i]);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][1]==ans[0] && a[j][0]==ans[1]){
                printf("YES");
                return 0;
            }
            if(a[j][1]==ans[0] && a[i][0]==ans[1]){
                printf("YES");
                return 0;
            }
        }
        if(a[i][0]==ans[0] && a[i][1]==ans[1]){
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}
