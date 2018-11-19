#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n;
    cin>>n;
    string a[n];
    int flag=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==s)
        {
            flag=1;
            break;
        }
    }
    if(flag) { cout<<"YES"<<endl; return 0;}
    for(int i=0;i<n && !flag;i++)
    {
        char c = a[i][1];
        if(c!=s[0]) continue;
        for(int j=0;j<n & !flag;j++)
        {
            if(a[j][0]==s[1])
            {
                flag=1;
                break;
            }
        }
    }
    if(flag) {cout<<"YES"<<endl;}
    else cout<<"NO"<<endl;

    return 0;
}
