#include<bits/stdc++.h>
#define maxn 100005
using namespace std;


int n,k;
set <int> s;

bool solve()
{
    set <int>::iterator i,j;
    for(i=s.begin();i!=s.end();i++)
    {
        for(j=s.begin();j!=s.end();j++)
        {
            if(!((*i)&(*j))) return 1;
        }
    }
    return 0;
}


int main()
{
    while(~scanf("%d%d",&n,&k))
    {
        s.clear();
        int i,j;
        for(i=0;i<n;i++)
        {
            int x=0;
            for(j=0;j<k;j++)
            {
                int a;
                scanf("%d",&a);
                x|=(a<<j);
            }
            s.insert(x);
        }
        if(solve()) printf("YES\n");
        else printf("NO\n");
    }
}
         	 	  	  		   				