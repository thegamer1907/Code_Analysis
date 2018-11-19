#include <bits/stdc++.h>
using namespace std;
char s[110][2];

int main()
{
    char ch[2];
    cin>>ch;

    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        cin>>s[i];
        if(s[i][0]==ch[0]&&s[i][1]==ch[1])
        {
            puts("YES");
            return 0;
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(s[i][1]==ch[0]&&s[j][0]==ch[1])
            {
                puts("YES");
                return 0;
            }
        }
    }
    puts("NO");
    
}