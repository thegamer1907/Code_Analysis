#include<bits/stdc++.h>
using namespace std;

int main()
{
    string pass,a;
    int n,flag1=0,flag2=0;
    cin>>pass;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a[0]==pass[1])
        {
            flag2=1;
        }
        if(a[1]==pass[0])
        {
            flag1=1;
        }
        else if(a==pass)
        {
            flag1=1;
            flag2=1;
        }
    }

    if(flag1 && flag2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
