#include<bits/stdc++.h>
using namespace std;
map<char,int>a1;
int main()
{
   string b;
   int a,sum=0,sum2=0,check=0;
   cin >> b >> a;
   for (int i=0;i<a;i++)
   {
       string b1;
       cin >> b1;
       if (b1==b)
        check=1;
       else
       {
           if (b1[1]==b[0])
            sum=1;
           if (b1[0]==b[1])
               sum2=1;
       }
   }
   if (check==1||sum2+sum==2)
    cout << "YES";
   else
    cout << "NO";
   return 0;
}
