#include <bits/stdc++.h>
using namespace std;

string s0,s[101];
int main()
{
    cin>>s0;
    int n;
    cin>>n;
    bool flag=0,flag1=0,flag2=0;
    for (int i=1;i<=n;i++)
    {
        cin>>s[i];
        if (s[i]==s0) flag=1;
    }
    for (int i=1;i<=n;i++)
    {
        if (s[i][1]==s0[0]) flag1=1;
        if (s[i][0]==s0[1]) flag2=1;
    }
    if (flag||(flag1&&flag2)) puts("YES");
    else puts("NO");
	return 0;
}
