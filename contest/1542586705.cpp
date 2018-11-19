#include<bits/stdc++.h>
using namespace std;

int s[22];

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
    {
        int st = 0;
        for(int j=0;j<k;j++)
        {
            int x;
            scanf("%d",&x);
            st = st*2 + x;
        }
        s[st] = true;
    }
    if(s[0])
    {
        puts("YES");
        return 0;
    }
    for(int i=0;i<16;i++)
    {
        if(!s[i]) continue;
        for(int j=i+1;j<16;j++)
        {
            if(i&j) continue;
            if(s[j])
            {
                puts("YES");
                return 0;
            }
        }
    }
    puts("NO");
}
