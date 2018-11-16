#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i,j;
    string str;
    cin>>n>>t;
    cin>>str;


   for(j=1;j<=t;j++)
   {
   for(i=0;i<n-1;i++)
   {
       if(str[i]=='B'&&str[i+1]=='G')
       {
           swap(str[i],str[i+1]);
           i+=1;
       }
   }
   }

    for(i=0;i<n;i++)
        cout<<str[i];

}
