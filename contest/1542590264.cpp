#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

string a, b[200],c;
int n;

int main()
{
    cin >> a >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> b[i];
    }
    for(int i=1; i<=n; i++)
    {
        if(b[i] == a)
        {
            puts("YES");
            return 0;
        }
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(a[0]==b[i][1] && a[1]==b[j][0])
            {
                puts("YES");
                return 0;
            }
            if(a[1]==b[i][0] && a[0]==b[j][1])
            {
                puts("YES");
                return 0;
            }
        }
    }
    puts("NO");

    return 0;
}
