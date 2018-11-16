#include<bits/stdc++.h>
using namespace std;
 map < string,int > my_map;
int main()
{
  int n,t,flag_b=0;
  string s;
  cin>>n>>t;
cin>>s;
for(int j=1;j<=t;j++){
     flag_b=0;
         for(int i=0;i<n;){
         if(s[i]=='B')
         {
             flag_b=1;
             i++;
         }

         else if(s[i]=='G' && flag_b==1)
         {
             swap(s[i],s[i-1]);
             i+=1;
             flag_b=0;
         }
         else
            i++;



  }

}

cout<<s<<endl;
    return 0;
}



