#include<bits/stdc++.h>
#define ChenChuLing main
#define ll long long
using namespace std;
int n,a[1004],p;
ll ans=0;
int ChenChuLing(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        p=max(a[i],p);
    }
    for(int i=1;i<=n;i++)ans+=(p-a[i]);
    printf("%I64d\n",ans);
    return 0;
}
