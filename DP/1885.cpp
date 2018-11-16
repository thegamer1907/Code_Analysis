
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100006];
    int i,j,k,n,l,r,s,x,y,z,p;
    scanf("%s",a);

        r=0;k=0;y=0;z=0;
        l=strlen(a);
        for(i=0;i<l;i++)
        {
            if(a[i]=='A'&& a[i+1]=='B')
            {
                r=1;
               if (a[i+2]=='A')i+=2;
               else i++;
            }
        if(r==1)
         {
            if(i!=j)
            if(a[i]=='B' && a[i+1]=='A')
            {
                k=1;
               if(a[i+2]=='B')
                i+=2;
               else i++;
            }
         }
        }

         for(i=0;i<l;i++)
        {
            if(a[i]=='B'&& a[i+1]=='A')
            {
                y=1;
                if(a[i+2]=='B')
                i+=2;
               else i++;
            }
        if(y==1){
            if(a[i]=='A' && a[i+1]=='B')
            {
                z=1;
                if(a[i+2]=='A')
                i+=2;
               else i++;
            }
         }
         }
        if ((k==1 && r==1)||(y==1 && z==1))
            printf("YES\n");
            else
                printf("NO\n");
    return 0;
}
