#include<iostream>
 #include<string.h>
  using namespace std;

int main() {
    int i,j,n,c,k;
    char str[100];
    cin>>n>>j;
    cin>>str;
    for(i=0;i<j;i++)
    {
    for(k=0;k<n;k++)
    {
      if(str[k]=='B'&&(k)<n-1&&str[k+1]=='G')
      {
       c=str[k+1] ;
       str[k+1]=str[k];
       str[k]=c;
       k++;
       
      }
    }
    }
    cout<<str;
return 0;
}
