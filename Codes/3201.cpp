#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
    int n,imin=1000000005,cnt=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]),imin=min(imin,a[i]);
    if(imin>n){
        cnt=imin/n;
        for(int i=1;i<=n;i++) a[i]-=(n*cnt);
    }
    bool flag=false;
    for(int i=1;i<=n;i++){
        if(a[i]<=(i-1)){
            printf("%d\n",i);flag=true;
            break;
        }
        else a[i]-=n;
    }
    if(!flag){
        for(int i=1;i<=n;i++){
            if(a[i]<=(i-1)){
                printf("%d\n",i);flag=true;
                break;
            }
        }
    }
    return 0;
}
