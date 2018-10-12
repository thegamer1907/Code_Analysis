#include<bits/stdc++.h>
using namespace std;
long long pre[200005];
int main()
{
    int n,q,a;
    long long cnt=0,k;
    scanf("%d%d",&n,&q);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        if(i==0) pre[i]=a;
        else pre[i]=pre[i-1]+a;
    }
    for(int i=0;i<q;i++){
        scanf("%lld",&k);
        int pos=upper_bound(pre,pre+n,k+cnt)-pre;
        if(pos==n) printf("%d\n",n),cnt=0;
        else{
            printf("%d\n",n-pos);
            cnt+=k;
        }
    }
    return 0;
}
