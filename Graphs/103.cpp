#include<bits/stdc++.h>
using namespace std;
int n,t;
string s;
void nhap()
{
    cin>>n>>t;
    cin>>s;
}
void xuli()
{
    char tg;
    for(int i=1;i<=t;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(s[j]=='B'&&s[j+1]=='G')
            {
                tg=s[j+1];
                s[j+1]=s[j];
                s[j]=tg;
                j++;
            }
        }
    }
    cout<<s;
}
int main()
{
    nhap();
    xuli();
    return 0;
}
