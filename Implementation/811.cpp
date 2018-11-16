#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,t;
    cin>>n>>t;
    string c;cin>>c;
    string s ;
    while(t--)
    {
        for(int i=0;i<n;i++){
        if(c[i]=='B' && c[i+1]=='G'){
           s+=c[i+1];
           s+=c[i];
           i++;
           }
       else{
            s+=c[i];
           }
        }
     c.clear();
     c=s;
     s.clear();
   }

    cout<<c;
}
