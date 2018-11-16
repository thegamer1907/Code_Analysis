/* DHUOJ solution #368650 @ 2018-11-11 19:15:03.375 */

#include <stdio.h>

int main()
{
     char a[200009]={0};
     char b;
     int i=1;int fin=0;int find=0;int k=0;int c=0;
     while(scanf("%c",&a[i])!=EOF)
     {
         if(a[i]!='\n'&&k==0)
         {
             if(a[i]=='A'&&fin==0&&a[i-1]=='B')
                 {fin=i;}
             if(a[i]=='B'&&find==0&&a[i-1]=='A')
                 {find=i;}
             if(fin!=0&&find!=0&&(fin-find!=1)&&(find-fin!=1)) {k=1;}
             if(fin!=0&&find!=0&&(fin-find==1||find-fin==1)) {k=2;a[i+1]=='x';i=i+1;}

              i=i+1;}
        else if(a[i]!='\n'&&k==2)
        {
            if(a[i]=='A'&&a[i-1]=='B')
                 {k=1;}
             if(a[i]=='B'&&a[i-1]=='A')
                 {k=1;}
             i=i+1;
        }
         else if(a[i]=='\n')
         {  c=0;while(c<=i) {a[c]=0;c=c+1;}
           if(k==1) printf("YES\n");
              else printf("NO\n");
             i=1;fin=0;find=0;k=0;
             continue;
         }
     }

     return 0;
}
