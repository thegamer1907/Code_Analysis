#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
 int cnt=1 ; string s ;
 cin >> s ;
 for(int i=1 ;i<s.size() ; i++)
 {
     if(s[i]==s[i-1])
        cnt++;
   else
    cnt=1;
   if(cnt==7)break;
 }
 if(cnt==7)
    cout<<"YES";
 else
    cout<<"NO";

return 0 ;
}
