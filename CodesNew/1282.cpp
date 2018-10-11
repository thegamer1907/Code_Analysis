#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,s,Min=1e9,ans;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a);
        s=ceil((a-(i-1))*1.0/n);
        if(s<Min)Min=s,ans=i;
    }
    printf("%d\n",ans);
    return 0;
}