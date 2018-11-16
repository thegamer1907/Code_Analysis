#include<bits/stdc++.h>

using namespace std;

const long long N=1e12+7;
const int M=1e5+7;

bool fr[M];
int pre[M],n,m,x;
int main()
{
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;++i)
        scanf("%d",pre+i);
    for(int i=n;i>=1;--i){
        if(fr[pre[i]])pre[i]=pre[i+1];
        else{
            fr[pre[i]]=1;
            pre[i]=pre[i+1]+1;
        }
    }
    while(m--){
        scanf("%d",&x);
        printf("%d\n",pre[x]);
    }
    return 0;
}
