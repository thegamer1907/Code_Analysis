#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int a,b,c,d,e,f,g,h;
   string s;
   while(cin>>a>>b)
   {
       cin>>s;
       for(c=1;c<=b;c++)
       {
           for(d=0;d<s.size()-1;d++)
           {
               if(s[d]=='B'&&s[d+1]=='G')
               {
                   swap(s[d],s[d+1]);
                   d++;
               }

           }


       }
       cout<<s<<endl;



   }





    return 0;
}
