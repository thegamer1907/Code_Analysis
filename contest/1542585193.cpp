#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    int n,i,j,k,f=0,r=0,c=0;
    cin>>a>>n;

    for(i=0; i<n; i++)
    {
        cin>>b;
        if(a==b) c=1;
        if(b[0] == a[1])
            r=1;
        if(b[1] == a[0])
            f=1;
    }
    if((r && f)|| c) printf("YES\n");
    else printf("NO\n");

    return 0;
}
