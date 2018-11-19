#include<bits/stdc++.h>
using namespace std;
int main ()
{
   string s,s1,s2;
   int n,p=0,q=0;
   cin>>s;
   cin>>n;
   for(int i=0;i<n;i++){
     cin>>s1;
      if(s1[0]==s[1]) p=1;
      if(s1[1]==s[0]) q=1;
    if(s1==s || p==1 && q==1){
        cout<<"yes"<<endl;
        return 0;
       }
   }
   cout<<"no"<<endl;

}
