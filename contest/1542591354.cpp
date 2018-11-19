#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n;

    cin>>n;
    int i=0;
    int flag=0;
    string arr[n];
    for(int i=0;i<n;i++)
    {
           cin>>arr[i];
           if(arr[i]==s)
           {
               flag=1;
           }
    }
    if(flag==1)
         {
              cout<<"YES";
              return 0;
         }
    int fl=0,fl1=0;
    for(int i=0;i<n;i++)
    {
          if(s[0]==arr[i][1])
          {
                fl=1;
                break;
          }
    }
    for(int i=0;i<n;i++)
    {
          if(s[1]==arr[i][0])
          {
                fl1=1;
                break;
          }
    }
    if(fl&&fl1)
          cout<<"YES";
    else
          cout<<"NO";
    return 0;
}