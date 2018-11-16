#include <iostream>

using namespace std;

int main()
{
   int n,t,i,j;
   char a[50];
   cin>>n>>t;
   cin>>a;
   for(j=1;j<=t;j++)
   {
    for(i=0;a[i]!='\0';i++)
   {
       if(a[i]=='B' && a[i+1]=='G')
       {
           a[i]='G';
           a[i+1]='B';
           i++;
       }
   }
   }
   cout<<a;

    return 0;
}
