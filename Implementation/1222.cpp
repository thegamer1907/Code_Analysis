#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
   int i,n,t;
   char str[51],sw;
   scanf("%d %d",&n,&t);
   scanf("%s",str);
   while(t--){
   for(i=0;i<=n-2; )
   {
       if(str[i]=='B'&&str[i+1]=='G')
       {
          sw=str[i];
          str[i]=str[i+1];
           str[i+1]=sw;
           i+=2;
       }
       else i++;
   }
   }
   cout<<str<<endl;
    return 0;
}
