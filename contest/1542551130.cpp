#include<bits/stdc++.h>
#define sz 200005
using namespace std;

int main()
{
    int n,flag=0,first=0,sec=0;
    string str,s,sub="";
    cin>>str;
    scanf("%d",&n);

    for(int i=0; i<n; i++)
    {
       cin>>s;
       if(str==s)
       {
           flag=1;
       }
       else if(str[0]==s[1])
       {
           first=1;
       }

       sub+=s;
       sub+="_";

    }
    for(int i=0;i<sub.size();i++)
    {
        if(str[1]==sub[i] && i%3==0)
        {
            sec=1;
        }
    }
   if(flag==1 || (first==1 && sec==1))
   {
        printf("YES\n");
   }
   else{
     printf("NO\n");
   }
}
