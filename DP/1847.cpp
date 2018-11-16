#include <bits/stdc++.h>

using namespace std;


int main()
{
   string s  ;
   cin>>s;
int f1= s.find("AB") ;
int f2=s.find("BA") ;
if(f1!=-1&&s.find("BA",f1+2)!=-1||f2!=-1&&s.find("AB",f2+2)!=-1)
    cout<<"YES\n" ;
else
    cout<<"NO\n" ;



    return 0;
}
