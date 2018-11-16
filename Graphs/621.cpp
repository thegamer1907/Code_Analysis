#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
   int t,m,i,j,a[55],temp;
   cin >> m >> t;
   cin >> s;
   for(i=0;i<t;i++)
   {
        for(j=0;j<s.size();j++)
   {
    if(s[j+1] > s[j])
    {
        temp = s[j+1];
        s[j+1] =s[j];
        s[j]=temp;
        j++;
    }

   }
   }

   cout << s ;
    return 0;
}
