#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int len = s.length();
    int sum[len+5],cnt=0;
    sum[0]=0;
    for(int i=1;i<len;i++)
    {
        if(s[i]==s[i-1])
        {
            sum[i]=++cnt;
        }
        else
        {
            sum[i]=cnt;
        }
    }
    /*cout<<endl;
    for(int i=0;i<len;i++)
    {
        cout<<sum[i]<<" ";
    }*/
    int m;
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        int a,b;
        cin>>a>>b;
        if(a==1)
            cout<<sum[b-1]<<endl;
        else
        {
            cout<<sum[b-1]-sum[a-1]<<endl;
        }
    }
    return 0;
}
