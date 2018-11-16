#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,num=0,a[120]={0},b[120]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    scanf("%d",&m);
    for(int i=0;i<m;i++)
        scanf("%d",&b[i]);
    sort(b,b+m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(b[j]==-1)
                continue;
            if(b[j]==a[i]+1||b[j]==a[i]-1||a[i]==b[j])
            {
                num++;
                b[j]=-1;
                break;
            }
        }
    }
    printf("%d\n",num);
    return 0;
}
