#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   string s;
   cin>>s>>n;
   string a[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   for(int i=0;i<n;i++)
   {
        if(s==a[i])
       {
           cout<<"YES"<<endl;
           return 0;
       }
   }
   for(int i=0;i<n;i++)
   {

       if(s[0]==a[i][1]&&s[1]==a[i][0])
       {
            cout<<"YES"<<endl;
           return 0;

       }
   }


   for(int f=0;f<n;f++)
           {
               if(s[0]==a[f][1])
                   {
               for(int y=f+1;y<n;y++)
               {

                       if(s[1]==a[y][0])
                       {
                           cout<<"YES"<<endl;
                           return 0;
                       }
                   }
               }
           }
           for(int f=n-1;f>=0;f--)
           {
               if(s[0]==a[f][1])
                   {
               for(int y=f-1;y>=0;y--)
               {
                       if(s[1]==a[y][0])
                       {
                           cout<<"YES"<<endl;
                           return 0;
                       }
                   }
               }
           }
   cout<<"NO"<<endl;
    return 0;
}
