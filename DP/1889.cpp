#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,flag=0,a=0,b=0;
    string str;
    cin>>str;
    n=str.length();
    for(i=0; i<n-1; i++){
       if(str[i]=='A'&&str[i+1]=='B')
       {
           for(j=i+2; j<n-1; j++)
           {

               if(str[j]=='B'&&str[j+1]=='A')
               {
                   flag=1;
                   break;
               }
           }
       }
       if(!flag){
       if(str[i]=='B'&&str[i+1]=='A')
       {
           for(j=i+2; j<n-1; j++)
           {

               if(str[j]=='A'&&str[j+1]=='B')
               {
                   flag=1;
                   break;
               }
           }
       }
       }
    }
    if(flag)
     cout <<"YES"<<endl;
    else
        cout <<"NO"<<endl;
    return 0;

}
