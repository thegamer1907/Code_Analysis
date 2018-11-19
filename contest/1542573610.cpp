#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a[3];cin>>a;
    int n;cin>>n;
    bool flag1=0,flag2=0;
    for(int i=1;i<=n;i++)
    {
        char str[3];
        cin>>str;
        if(str[0]==a[1]&&str[1]==a[0])
        {
            cout<<"YES"<<endl;
            return 0;
        }
        if(str[0]==a[0]&&str[1]==a[1])
        {
            cout<<"YES"<<endl;
            return 0;
        }
        if(str[0]==a[1])
            flag2=1;
        if(str[1]==a[0])
            flag1=1;
    }
    if(flag1&&flag2)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    else
    {
        cout<<"NO"<<endl;
        return 0;
    }
}
