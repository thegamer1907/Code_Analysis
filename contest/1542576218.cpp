#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int n,flag=0,ans1=0,ans2=0;
    cin>>a>>n;
    for(int i=0;i<n;i++)
    {
        cin>>b;
        if(b==a) flag=1;
        if(b[0]==a[1]) ans1++;
        if(b[1]==a[0]) ans2++;
    }
    if(flag) puts("YES");
    else if(ans1&&ans2) puts("YES");
    else puts("NO");
    return 0;
}
