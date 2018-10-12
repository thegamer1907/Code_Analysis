#include <bits/stdc++.h>

using namespace std;

map<string,int> mm;
string a;

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
    {
        cin>>a;
        mm[a]=1;
        a.clear();
    }
    int intersec=0;
    for(int i=0;i<m;i++)
    {
        cin>>a;
        if(mm.find(a)!=mm.end())
        {
            intersec++;
        }
    }
    if(n>m)
    {
        printf("YES");
    }
    else if(m>n)
    {
        printf("NO");
    }
    else
    {
        if(intersec%2==1)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    return 0;
}
