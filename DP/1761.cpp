#include<bits/stdc++.h>

using namespace std;

string s;
bool bo[4];

int main()
{
    cin>>s;
    memset(bo,false,sizeof(bo));
    int len=s.size();
    bool flag=false;
    for(int i=0;i<len-1;i++)
    {

       if(bo[0]==false)
       {
           if(s[i]=='A'&&s[i+1]=='B')
           {
               bo[0]=true;
               i++;
           }
       }
       else
       {
           if(bo[1]==false)
           {
               if(s[i]=='B'&&s[i+1]=='A')
               {
                   bo[1]=true;
                   i++;
               }
           }
       }
          if(bo[0]==true&&bo[1]==true)
        {
            flag=true;
            break;
        }

    }
    if(flag)
    {
        puts("YES");
        return 0;
    }
    else
    {
        memset(bo,false,sizeof(bo));
         for(int i=0;i<len-1;i++)
        {

          if(bo[1]==false)
          {
           if(s[i]=='B'&&s[i+1]=='A')
           {
               bo[1]=true;
               i++;
            }
          }
          else
          {
           if(bo[0]==false)
           {
               if(s[i]=='A'&&s[i+1]=='B')
               {
                   bo[0]=true;
                   i++;
               }
           }
          }
         if(bo[0]==true&&bo[1]==true)
          {
            flag=true;
            break;
          }

       }
       if(flag)
       {
           puts("YES");
           return 0;
       }
       else
       {
           puts("NO");
           return 0;
       }
    }

    return 0;
}
