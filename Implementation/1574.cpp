#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
  char c[101];
  gets(c);
  int count=0,flag=0;
  for(int i=0;c[i]!='\0';i++)
  {
      count = 0;
      for(int j=i+1;c[j]!='\0';j++)
      {
          if(c[i]==c[j])
          count++;
          else break;
          if(count>=6)
          {
              flag=1;
              break;
          }
          
      }
  }
  if(flag==1)
  cout<<"YES";
  else
  cout<<"NO";
  
}