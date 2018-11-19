#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf scanf
#define pf printf
#define pi 2*acos(0.0)
int main()
{
    string s,a,p;
    int n,flag=0,raf=0,m;
    vector<string>str;
    cin>>s;
    cin>>n;
    m=n;
    while(m--)
    {
        cin>>a;
        str.push_back(a);
        if(a==s)
          {
              flag=1;
          }
    }
    if( flag==1)
        cout<<"YES"<<endl;
    if(flag==0){
    for(int i=0;i<n;i++)
    {
        p=str[i]+str[i];
        if(s==p.substr(1,2)){
        cout<<"YES"<<endl;
        flag=1;
        break;
        }
    }
    }

    if(flag==0)
    {
        for(ll i=0;i<n;i++)
            if(str[i][0]==s[1]){
                raf=1;
                break;
            }
         if(raf==1)
         for(ll i=0;i<n;i++)
                if(str[i][1]==s[0])
                {
                    cout<<"YES"<<endl;
                    flag=1;
                    break;
                }

    }
    if(flag==0)
        cout<<"NO"<<endl;
    return 0;
}
