#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,t,j;
    char c[55];
    scanf("%d%d",&n,&t);
    getchar();
    scanf("%s",&c);
    for(j=1; j<=t; j++)
    {
        for(i=0; i<n-1; i++)
        {
            if(c[i]=='B' && c[i+1]=='G')
            {
                c[i]='G';
                c[i+1]='B';
                i++;
            }
        }
    }
    printf("%s",c);
    return 0;
}
