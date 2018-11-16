#include<stdio.h>
int main()
{
int n,t,i,j;
char A[100];
scanf("%d%d",&n,&t);
scanf("%s",A);
for(i=0;i<t;i++)
{
for(j=0;A[j]!='\0';j++)
{
if(A[j]=='B'&&A[j+1]=='G')
{
A[j]='G';
A[j+1]='B';
j++;
}
}
}
printf("%s\n",A);
}
