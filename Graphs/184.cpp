#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
   char sz[51];
   int gemun,bumun;
   scanf("%d%d",&gemun,&bumun);
   scanf("%s",&sz);
   int i,j;
   for(i=0;i<bumun;i++){
       for (j=0;j<gemun-1;j++){
        if(sz[j]=='B'&&sz[j+1]=='G'){
          sz[j]='G';
          sz[j+1]='B';
          j++;
        }
       }
   }
   cout<<sz<<endl;
}
