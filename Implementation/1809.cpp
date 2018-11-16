#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
   char a[150];
   int i,j,count=0,x,k;
   gets(a);
   x=strlen(a);
   for(i=0;i<x-1;i++){
        k=i;
      for(j=i;j<x;j++){
         if(a[k]==a[j])
            count++;
         else
            break;
      }
            if ( count>=7) {
                printf("YES");
                exit(0);
            }
            else
                count=0;
    }
   if (count<7)
       printf("NO");


   return 0;
}
