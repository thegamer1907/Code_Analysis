#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    long long int n;
    string s;
    cin>>s;
    cin>>n;
    long long int a[s.size()];
    a[0]=0;
    for(int i=1;i<s.size();i++)
    {
        if(s[i-1]==s[i])
        {
            a[i]=a[i-1]+1;
        }
        else a[i]=a[i-1];
    }
    long long int d1,d2,c;
    for(int i=0;i<n;i++)
    {
         cin>>d1>>d2;
         c=a[d2-1]-a[d1-1];
      //   if(s[d1-1]==s[d1])
         //   c--;
         cout<<c<<endl;
    }
    return 0;
}
