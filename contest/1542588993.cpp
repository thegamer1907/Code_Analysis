#include <bits/stdc++.h>
using namespace std;

char a[10000][4];
int main ()
{
    char ch[3];
    scanf ("%s",ch);
    int n;
    scanf ("%d",&n);
    for (int i=1;i<=n;i++)
        scanf ("%s",a[i]);
    int flag=0;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
        {
            char zz[5]; int cnt=0;
            for (int l=0;l<2;l++)
                zz[cnt++]=a[i][l];
            for (int k=0;k<2;k++)
                zz[cnt++]=a[j][k];
            zz[cnt]=0;
            for (int k=0;k<cnt-2;k++)
            {
                int qq=0;
                for (int jj=0;jj<2;jj++)
                {
                    if(ch[jj]==zz[k+jj]) qq++;
                }
                if(qq==2) flag=1;
            }
        }
    if(flag) printf ("YES\n");
    else printf ("NO\n");
    return 0;
}
