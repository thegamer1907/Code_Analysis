#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cng,i,l,j;
    char s[1000];
    cin>>n>>cng;
    for(i=0;i<=n;i++)
        scanf("%c",&s[i]);
    s[i]='\0';
    for(j=1;j<=cng;j++)
    {
         for(i=0;s[i]!='\0';i++)
            if(s[i]=='B'&&s[i+1]=='G')
            {
                swap(s[i],s[i+1]);
                i++;
            }
    }
    printf("%s",s);

}

