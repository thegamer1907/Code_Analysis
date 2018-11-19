#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;
    int n,i,flag1=0,flag2=0;
    cin>>n;
    string s;
    for(i=0;i<n;i++)
        {
            cin>>s;
            if(s[0]==str[0] && s[1]==str[1])
            {
                cout<<"YES";
                return 0;
            }
            if(s[0]==str[1])
                flag1=1;
            if(s[1]==str[0])
                flag2=1;
        }
        if(flag1 && flag2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    return 0;
}
