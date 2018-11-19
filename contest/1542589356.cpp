#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string p;
    cin>>p;
    cin.ignore();
    scanf("%d",&n);
    string a[n];
    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=0; i<n; i++)
    {
        if(p==a[i])
        {
            printf("YES");
            return 0;
        }
    }
    int f=0,s=0;
    for(int i=0; i<n; i++)
        if(p[0]==a[i][1])
        {
            f=1;
            break;
        }
    for(int i=0; i<n; i++)
        if(p[1]==a[i][0])
        {
            s=1;
            break;
        }
    if(f==1&&s==1)printf("YES");
    else printf("NO");
    return 0;
}
