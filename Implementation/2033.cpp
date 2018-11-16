#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,res=0,a=0,b=0,c=0;
    cin>>n;
    while(n--)
    {
        int x,y,z;
        cin>>x>>y>>z;
         a+=x;
       // cout<<a<<endl;
         b+=y;
        //cout<<b<<endl;
        c+=z;
        //cout<<c<<endl;
    }
    //res=a+b+c;
    if(a==0&&b==0&&c==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    return 0;
}
