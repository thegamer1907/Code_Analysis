#include <bits/stdc++.h>

const int M=1e5+7;
const long long N=1e12+7;

using namespace std;

int n,t,pre[M],x;
int main()
{
    scanf("%d %d",&n,&t);
    for(int i=1;i<=n;++i){
        scanf("%d",&x);
        pre[i]=pre[i-1]+x;
    }
    int ans=-1;
    for(int i=1,j=0;i<=n;++i){
        if(pre[i]-pre[j]>t)++j;
        ans=max(ans,i-j);
    }
    cout<<ans;
    return 0;
}


