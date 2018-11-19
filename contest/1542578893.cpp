#include<bits/stdc++.h>
#include <stdio.h>
#define ff(i,x,y)for(int i=x;i<y+1;i++)
#define fs(i,x,y)for(int i=x;i>y-1;i--)
#define all(x) x.begin(),x.end()
#define Ins(x) inserter(x,x.begin())
//set<int>::iterator it
using namespace std;
typedef long long ll;
int pan,vis[20],mes[100010];
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    ff(i,1,n)
    {
        int num=0;
        ff(j,1,k)
        {
            int now;
            scanf("%d",&now);
            num=(num<<1)|now;
        }
        vis[num]++;
        mes[i]=num;
    }
    if(vis[0])
    {
        printf("YES");
        return 0;
    }
    pan=0;
    ff(i,1,n)
    {
        ff(j,0,15)
        {
            if((j&mes[i])==0&&vis[j])
            {
                pan=1;
                break;
            }
        }
        if(pan)
            break;
    }
    if(pan)
        printf("YES");
    else
    printf("NO");
    return 0;
}
