#include <bits/stdc++.h>
using namespace std;
string s[500005];
int main()
{
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>s[i];
    for(int i=n-2;i>=0;i--)
    {
        int len1=s[i].size();
        int len2=s[i+1].size();
        bool flag=false;
        for(int j=1;j<min(len1,len2);j++){
            if(s[i][j]<s[i+1][j])
            {flag=true;break;}
            else if(s[i][j]>s[i+1][j]){
                s[i]=s[i].substr(0,j);
                flag=true;
                break;
            }
        }
        if(flag)continue;
        if(len1>len2)s[i]=s[i].substr(0,len2);
    }
    for(int i=0;i<n;i++)
        cout<<s[i]<<endl;
}
