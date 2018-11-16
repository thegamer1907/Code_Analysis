#include<cstdio>
#include<string.h>
int main()
{
    char a[100];
    int count=0;
    int flag=0;
    int len;
    gets(a);
    len=strlen(a);
  for(int i=0;i<len;i++)
  {
      if(a[i]==a[i+1])
      {
          count=count+1;
          if(count>=6)
          {
          flag=1;
          }
      }
     else
     {
          count=0;
      }
  }
  if(flag==1)
  {
      printf("YES");
  }
  else
  {
      printf("NO");
  }
  return 0; 
  
    
}