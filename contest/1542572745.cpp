#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    set<int> s;
    for(int i=0;i<n;++i)
    {
        int st=0;
        for(int j=0;j<k;++j)
        {
            int t;
            scanf("%d",&t);
            st|=(t<<j);
        }
        s.insert(st);
    }
    bool ok=false;
    for(int a : s)
    {
        for(int b : s)
        {
            bool nice=true;
            for(int j=0;j<k;++j)
            {
                int c=0;
                if((b>>j)&1) ++c;
                if((a>>j)&1) ++c;
                if(c==2) nice=false;
            }
            if(nice) ok=true;
        }
    }
    puts(ok?"YES":"NO");
    return 0;
}
