#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int bed[200],frt[200],flag=0,n;
    string s[200],ss;
    cin>>ss;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
                string str=s[i]+s[j];
                int w=str.find(ss);
                if(w!=-1)
                    flag=1;
        }
    }
    if(flag)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
