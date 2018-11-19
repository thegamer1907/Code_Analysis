#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    string str;
    cin>>str;
    cin>>n;
    int i;
    bool flag=false,flag1=false,flag2=false;
    string st[n];
    for(i=0;i<n;i++)
    {cin>>st[i];
        if (st[i][0]==str[0] && st[i][1]==str[1])
        flag=true;
        if (st[i][0]==str[1] )
        flag1=true;
        if (st[i][1]==str[0]) flag2=true;
    }
    if (flag) cout<<"YES";
    else
    if (flag1 && flag2 ) cout<<"YES";
    else
    cout<<"NO";
    
}