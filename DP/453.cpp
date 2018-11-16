#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,m,i,j,count=0,a[105],b[105];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    scanf("%d",&m);
    for(i=0; i<m; i++)
    {
        scanf("%d",&b[i]);
    }
    sort(b,b+m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(abs(a[i]-b[j])<=1){
                count++;
                b[j]=10000;
                break;
            }
        }
    }
    printf("%d\n",count);
    return 0;
}