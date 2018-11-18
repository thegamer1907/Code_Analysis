#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1[1000];
    int n,v,x=1,y=1;
    cin>>s;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>s1[i];
    }
    for(int i=0; i<n; i++)
    {
        if(s1[i]==s)
        {
            cout<<"yes"<<endl;
            return 0;
        }
        if(s1[i][1]==s[0])
        {
            x=0;
        }
        if(s1[i][0]==s[1])
        {
            y=0;
        }
    }
    if(x==0&&y==0)
    {
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    return 0;
}
