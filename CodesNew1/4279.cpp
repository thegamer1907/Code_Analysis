#include<bits/stdc++.h>
using namespace std;
string str[500000+10];
int main()
{
    int n,ans=0,flag;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>str[i];
    for(int i=n;i>=2;i--)
    {
        flag=1;
        for(int j=1;j<str[i].size()&&j<str[i-1].size();j++)
        {
            if(str[i][j]<str[i-1][j])
            {
                flag=0;
                str[i-1].erase(j,str[i-1].size()-j);
                break;
            }
            if(str[i][j]>str[i-1][j])
            {
                flag=0;
                break;
            }
        }
        if(flag)
        {
            if(str[i].size()<str[i-1].size())
            {
                str[i-1].erase(str[i].size(),str[i-1].size()-str[i].size());
            }
        }

    }
    for(int i=1;i<=n;i++)
        cout<<str[i]<<endl;
    return 0;
}
