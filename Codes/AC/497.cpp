#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
vector<LL> vec;
int getans(int k)
{
    int ans=0;
    while(k)
    {
        ans+=k%10;
        k/=10;
    }
    return ans;
}
int main()
{
    LL now=19;
    while(vec.size()<10000)
    {
        if(getans(now)==10)
            vec.push_back(now);
        now++;
    }
    int k;
    scanf("%d",&k);
    printf("%d",vec[k-1]);
    return 0;
}
