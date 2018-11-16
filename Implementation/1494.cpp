#include<stdio.h>
#include<string.h>

int main()
{
    char a[1005];
    int i,j,k,l,count1=0,count2=0;
    gets(a);
    l=strlen(a);
    i=0;j=0;
    for(i=0;i<l ;i++)
    {


    if(a[i]=='0')
    {
      if(a[i+1]=='0')
        {
            if(a[i+2]=='0')
            {
              if(a[i+3]=='0')
              {
                if(a[i+4]=='0')
                {
                  if(a[i+5]=='0')
                  {
                      if(a[i+6]=='0')
                      {
                       count1++;
                      }
                  }

                }
              }
            }

        }
    }
  }

  for(i=0;i<l;i++)
  {


    if(a[i]=='1')
    {
      if(a[i+1]=='1')
        {
            if(a[i+2]=='1')
            {
              if(a[i+3]=='1')
              {
                if(a[i+4]=='1')
                {
                  if(a[i+5]=='1')
                  {
                      if(a[i+6]=='1')
                      {
                       count2++;
                      }
                  }

                }
              }
            }

        }
    }
  }
   if(count2!=0&&count1==0)
    {
        printf("YES");
    }
    else if(count1!=0&&count2==0)
  {
      printf("YES");
  }
  else if(count1!=0&&count2!=0)
  {
      printf("YES");
  }
    else if(count2==0&&count1==0)
    {
         printf("NO");
    }
return 0;

}