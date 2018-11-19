#include <bits/stdc++.h>

using namespace std;
const int MAXN=1e5+7;
int n,k;
int a[MAXN];
int main()
{
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++)
    {
        int t=0,ta;
        for(int j=0;j<k;j++)
        {
            scanf("%d",&ta);
            t=t<<1|ta;
        }
        a[t]=1;
    }
    for(int i=0;i<1<<k;i++)
    {
        if(!a[i])
            continue;
        int v=~i;
        for(int j=0;j<1<<k;j++)
        {
            if((v|j)==v&&a[j])
            {

                return 0*printf("yes\n");
            }
        }
    }
//    for(int i=1;i<=n;i++)
//    {
//        int v=id[i];
//        int flag=0;
//        for(int j=0;j<k;j++)
//        {
//            cnt[j]+=a[v][j];
//            if(cnt[j]<=i-cnt[j])
//            {
//                flag++;
//            }
//        }
//        if(flag==k)
//        {
//            return 0*printf("yes\n");
//        }
//    }
    printf("no\n");
    return 0;
}
