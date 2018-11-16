#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,k,i;
    char a[100];

    cin>>n;

    cin>>t;
    getchar();
    for (i=1; i<=n; i++)
    {
        scanf("%c",&a[i]);
    }
    while(t--)
    {
        for (i=1; i<=n; i++)
        {

            if (a[i]=='B'&&a[i+1]=='G')
            {
                a[i+1]='B';
                a[i]='G';
                i=i+1;

            }


        }
    }

    for (i=1; i<=n; i++)
    {
        printf("%c",a[i]);
    }
    printf("\n");
    return 0;
}
