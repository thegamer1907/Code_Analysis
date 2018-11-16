#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[101];
    int n,t,i,j;
    cin>>n>>t;
    for(j=0;j<=n;j++)
        scanf("%c",&a[j]);
    a[j]='\0';
    for(i=1;i<=t;i++)
    {
        for(j=0;a[j]!='\0';j++)
        {
            if(a[j]=='B' && a[j+1]=='G')
            {
                swap(a[j],a[j+1]);
                j++;
            }
        }
    }
    printf("%s\n",a);
    return 0;
}
