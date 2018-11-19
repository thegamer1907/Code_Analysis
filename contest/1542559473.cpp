#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;
int n, k, t, m, mn, mx;
string ans="NO";
bool nums[16];
int main()
{
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++)
    {
        for (int j=t=0; j < k; j++)
        {
            scanf("%d", &m);
            t = t << 1 | m;
        }
        if(t==0);
        nums[t]=true;
    }
    if(nums[0]==true)
        ans="YES";
    else
        for(int i=1; i<pow(2, k); i++)
            for(int j=i+1; j<pow(2, k); j++)
                if(nums[i]==true&&nums[j]==true)
                    if((i^j)==(i+j))
                        ans="YES";
    cout<<ans<<endl;
    return 0;
}
