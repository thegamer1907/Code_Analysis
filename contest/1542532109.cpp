#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,i;
    string str,a[105];
    while(cin>>str>>n)
    {
        bool flag=false,flag1=false,flag2=false;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==str)flag=true;
            if(a[i][0]==str[1])flag1=true;
            if(a[i][1]==str[0])flag2=true;
        }
        if(flag==true||flag1==true&&flag2==true)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
