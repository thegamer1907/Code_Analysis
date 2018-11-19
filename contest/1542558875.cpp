#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    string str[111],s;
    int n,i,j,k,t=0;
    cin>>s>>n;
    bool flag=false;
    for(i=0;i<n;i++)    cin>>str[i];
    for(i=0;i<2;i++)
    {
        for(j=0;j<n;j++)
        {
            if(str[j]==s)
            {
                flag=true;
                break;
            }
            else if(str[j][1]==s[0] and t==0)
                t++;
            else if(str[j][0]==s[1] and t==1)
                t++;
            if(t==2)
            {
                flag=true;
                break;
            }
        }
        if(flag)    break;
    }
    if(flag) cout<<"YES";
    else    cout<<"NO";
}
