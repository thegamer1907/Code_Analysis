#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll i,j,k=0,l,n,m;
    string a;
    cin>>a;
    cin>>n;
    string b;
    int c[2]={0};
    for(i=0;i<n;i++)
    {
        cin>>b;
        if(a[0]==b[0]&&a[1]==b[1])
        {
            cout<<"YES";
            return 0;
        }
        if(a[0]==b[1])
        {
            k=1;
        }
        if(a[1]==b[0])
            c[0]++;
    }
   // cout<<c[0]<<endl;
   if(c[0]>0&&k==1)
   {

       cout<<"YES";
       return 0;
   }
   cout<<"NO";
}
