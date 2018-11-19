#include <bits/stdc++.h>
using namespace std;

int n,k,o,a[100069],Free[100],ma;
int onbit(int x,int k){
    return x|(1<<(k-1));
}
int main(){
    scanf("%d%d",&n,&k);
    if (n==1){
        for (int i=1;i<=k;i++){
                scanf("%d",&a[i]);
            if (a[i]==1){cout<<"NO";return 0;}
        }
        cout<<"YES";
        return 0;
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=k;j++){
            scanf("%d",&o);
            if (o) a[i]=onbit(a[i],j);
        }
    }
    ma=pow(2,k)-1;
    for(int i=1;i<=n;i++){
        for (int j=0;j<=ma;j++){
            if (Free[j] && (a[i]&j)==0){
                cout<<"YES";
                return 0;
            }
        }
        Free[a[i]]=1;
    }
    cout<<"NO";
}
