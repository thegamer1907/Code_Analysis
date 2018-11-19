#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std ;
int main()
{ 
    string str1,str2;
    int a,y=0,z=0,x=0;
    cin>>str1>>a;
              for ( int i=1;i<=a;i++)
    {          
              cin>>str2;
    if (str2==str1)
             x++;
   else if  (str2[0]==str1[1])
               z++;
   if (str2[1]==str1[0])
               y++;
    }           
if ((y>=1&&z>=1)||x>=1)
    cout<<"YES";
else 
    cout<<"NO";
return 0;
}