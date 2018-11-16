#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    string s;
    cin>>n>>t>>s;
    string a=s;
    for(int i=0;i<t;i++)
    {
        s=a;
        for(int j=1;j<n;j++)
        {
            if(s[j-1]=='B' and s[j]=='G')
                swap(a[j],a[j-1]);
        }
    }
    cout<<a;
}
