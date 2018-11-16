#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int j,p,i,x;
    scanf("%s",a);
    p=strlen(a);
    for(i=0; i<p; i++)
    {
        x=1;
        for(j=i+1; j<p; j++)
        {
            if(a[i]==a[j])
                x+=1;
            else
                break;
        }

        if(x==7)
            break;

    }

    if(x==7)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
