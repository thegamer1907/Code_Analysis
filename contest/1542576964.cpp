#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
typedef pair<int,int> pp;


bool tag[1111];

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    for(int i=0 ; i<n ; i++)
    {
        int x=0;
        for(int j=0 ; j<k ; j++)
        {
            int t;
            scanf("%d",&t);
            x=x<<1|t;
        }
        tag[x]=true;
    }
    bool win=false;
    for(int i=0 ; i<(1<<k) ; i++)
    {
        if(!tag[i])
        {
            continue;
        }
        for(int j=i ; j<(1<<k) ; j++)
        {
            if(!tag[j])
            {
                continue;
            }
            if((i&j)==0)
            {
                win=true;
                break;
            }
        }
        if(win)
        {
            break;
        }
    }
    if(win)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
