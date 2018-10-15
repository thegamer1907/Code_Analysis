#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
string s[500005];
int n,len;
int main()
{
    scanf("%d",&n);
    for(int i=0; i<n; i++)
        cin>>s[i];
    for(int i=n-1; i>0; i--)
    {
        if(s[i]>=s[i-1])
            continue;
        len=s[i-1].size();
        for(int j=1; j<len; j++)
            if(s[i-1][j]>s[i][j])
            {
                s[i-1]=s[i-1].substr(0,j);
                break;
            }
    }
    for(int i=0;i<n;i++)
        cout<<s[i]<<endl;
    return 0;
}
