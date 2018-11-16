#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
   string s,t;
   cin >> s;
   t=s;
   int f=0;
   if(s.find("AB")!=string::npos)
   {
       s.replace(s.find("AB"),2,"CD");
       f=1;
   }
   if(f==1 && s.find("BA")!=string::npos)
   cout << "YES";
   else
   {
       f=0;
       if(t.find("BA")!=string::npos)
       {
           t.replace(t.find("BA"),2,"CD");
           f=1;
       }
       if(f==1 && t.find("AB")!=string::npos)
        cout << "YES";
        else
        cout << "NO";
   }
}