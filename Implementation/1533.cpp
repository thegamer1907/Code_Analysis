#include<bits/stdc++.h>
#include <sstream> 
using namespace std;

int main() {

string str;
cin>>str;
int j=0;
int count=0;
if(str.size()<7)
   cout<<"NO";
else
{
    for(int i=0;i<str.size();i++)
    {
       if(str[i]==str[i+1] && str[i+1]==str[i+2] && str[i+2]==str[i+3] && str[i+3]==str[i+4] && str[i+4]==str[i+5]
       && str[i+5]==str[i+6] && str[i+6]==str[i])
       {
           cout<<"YES";
           break;
       }
       else if(i+7==(str.size()))
       {
           cout<<"NO";
           break;
       }
       else
         count++;
    }
}
return 0;
}