#include<stdio.h>
int main()
{
    int i,n,j,t;
    char s[55],temp;
    scanf("%d %d",&n,&t);
    scanf("%s",s);
    for(i=0;i<t;i++)
    {
        for(j=0;s[j]!='\0';j++)
        {
            if(s[j]=='B' && s[j+1]=='G')
            {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
                j++;
            }
        }
    }
    printf("%s\n",s);
    return 0;
}