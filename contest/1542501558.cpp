#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define se second
#define fr first
#define mod 1000000007
#define endl "\n"

signed main()
{
 //   freopen("input.txt","r",stdin);
   // freopen("output1.txt","w",stdout);
    string str;
    cin>>str;
    int n;
    cin>>n;
    string s[101];
    string st="";
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    int flag=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(s[i][1]==str[0]&&s[j][0]==str[1])
            {
                flag=1;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]==str)
            flag=1;
    }
    if(flag)
        cout<<"YES"<<endl;
    else 
        cout<<"NO"<<endl;
    
}
