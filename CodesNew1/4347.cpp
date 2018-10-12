#include<bits/stdc++.h>
using namespace std;
string a[500100];
int main()
{
    int n,i,j;
    while(~scanf("%d",&n))
    {
        for(i=0; i<n; i++)
           // scanf("%s",a[i]);
           cin>>a[i];
        for(i=n-2; i>=0; i--)
        {
            int f=0;
            for(j=1; a[i+1][j]!='\0'||a[i][j]!='\0'; j++)
            {
                if(a[i][j]>a[i+1][j])
                {
                    if(f==0)
                    {
                    a[i][j]=' ';
                    break;
                    }
                }
                else if(a[i][j]==a[i+1][j])
                    continue;
                else
                {
                    f=1;
                    break;
                }
                    
            }
        }
        for(i=0; i<n; i++)
        {
            int m=a[i].size();
            for(int k=0;k<m;k++)
            {
                if(a[i][k]==' ')
                    break;
                printf("%c",a[i][k]);
            }
            printf("\n");
        }

    }
    return 0;
}
