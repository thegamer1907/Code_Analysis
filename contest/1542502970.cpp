#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n;
    scanf("%d",&n);
    string q[110];
    for (int i=0; i<n; i++)
        cin>>q[i];
    for (int i=0; i<n; i++)
    {
        if(q[i]==s)return 0*puts("YES");
        for (int j=0; j<n; j++)
            if (q[i][0]==s[1]&&q[j][1]==s[0])return 0*puts("YES");
    }
    puts("NO");
    return 0;
}