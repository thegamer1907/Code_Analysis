#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
char a[105][5];
int main()
{
    string s,b;
    cin>>s;
    int n,ff=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b="";
        b.assign(a[i]);
        if(b==s)
                ff=1;
        b="";
        b+=a[i][1];
        b+=a[i][0];
        if(b==s)
            ff=1;
        for(int j=0;j<i;j++)
        {
            b="";
            b+=a[i][1];
            b+=a[j][0];
            if(b==s)
                ff=1;
            b="";
            b+=a[j][1];
            b+=a[i][0];
            if(b==s)
                ff=1;
        }

    }
    if(ff)
        puts("YES");
    else
        puts("NO");
}
