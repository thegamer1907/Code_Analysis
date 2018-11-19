#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <algorithm>
#include  <string>

using namespace std;
int n,k;
int du[20];
int main()
{
    while(scanf("%d%d",&n,&k)!=EOF)
    {
        int ans=0;
        int as,an,ij=0;
        memset(du,0,sizeof(du));
        for(int i=0;i<n;i++)
        {
            an=0;
            for(int j=0;j<k;j++)
            {
                scanf("%d",&as);
                if(as)an+=1<<j;
            }
            int lo=1;
            for(int l=0;l<ij;l++)
                if(du[l]==an)
                    lo=0;
            if(lo)du[ij++]=an;
        }
        for(int i=0;i<ij;i++)
        {
            if(du[i]==0){
                ans=1;break;
            }
            for(int j=i+1;j<ij;j++){
                if((du[i]&du[j])==0){
                    ans=1;break;
                }
            }
            if(ans)
                break;
        }
        //for(int i=0;i<n;i++)
            //cout<<du[i]<<"\n";
        if(ans<1)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}
