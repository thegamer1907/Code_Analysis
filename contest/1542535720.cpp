#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,i=0,count=0;
   char p[3];
   cin>>p;
   cin>>n;
   char s[3],u[3];
   while(n>=0)
   {
       cin>>s;
       strcpy(u,s);
       if(strcmp(s,p)==0)
       count=1;
       else if(strcmp(strrev(u),p)==0)
       count=1;
       else
       {    if(s[0]==p[1]&i!=1)
            i=2;
            if(i==2)
            {
                if(s[1]==p[0])
                count=1;
            }
     if(s[1]==p[0]&&i!=2)
     i=1;
     if(i==1)
     {
         if(s[0]==p[1])
         count=1;
     }
       }
       n--;
   }
   if(count==1)
   cout<<"YES";
   else
   cout<<"NO";
    return 0;
}