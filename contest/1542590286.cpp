#include<bits/stdc++.h>
using namespace std;
char a[10];
char x[110][10];
int main()
{
    scanf("%s",a+1);
    int n;
    scanf("%d",&n);

    for(int i=1; i<=n; i++) scanf("%s",x[i]+1);
    int ok=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<=n; j++)
        {
            if(x[i][2] == a[1] && x[j][1] == a[2]) ok=1;
            if(x[j][2] == a[1] && x[i][1] == a[2]) ok=1;
            if(x[i][1] == a[1] && x[i][2] == a[2]) ok=1;
            if(ok)
            {
                puts("YES");
                return 0;
            }
        }
    }
    puts("NO");
    return 0;
}
