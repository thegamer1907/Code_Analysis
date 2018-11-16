#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string t;
    cin>>t;
    int mm=0;
   for(int i=0;i<t.length();i++)
   {
       if(t[i]=='4' || t[i]=='7')
       {
           mm++;
       }
   }
   if(mm==0)
   {
       cout<<"NO";
       return 0;
   }
   if(mm==4 || mm==7 || mm%47==0 || mm%74==0 || mm%44==0 || mm%77==0)
   {
       cout<<"YES";
       return 0;
   }else
   {
       cout<<"NO";
       return 0;
   }


}
