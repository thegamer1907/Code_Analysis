#include <bits/stdc++.h>
using namespace std;
string pass,bark[102];
int n;
bool judge()
{
    for (int i=1;i<=n;i++)
        if(bark[i]==pass)
            return true;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
        {
            string tmp;
            tmp.push_back(bark[i][1]);
            tmp.push_back(bark[j][0]);
            if(tmp==pass)
                return true;
        }
    return false;
}
int main()
{
    cin>>pass;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
        cin>>bark[i];
    if(judge())
        puts("YES");
    else
        puts("NO");
    return 0;
}
