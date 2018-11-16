#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int t;
    cin>>t;
    int  arr[n-1];
    int fg=0;
    for(int i=1;i<n;i++)
        cin>>arr[i];
        int id=1;
   while(id<=n)
   {
       if(id==t)
       {
           fg=1;
           break;
       }
       if(id==n)
       {
           break;
       }
       else
       {

           id=id+arr[id];
       }
   }
    if(fg==0)
    {
        cout<<"NO"<<endl;
    }
    else
        cout<<"YES"<<endl;
}
