#include<cstdio>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<queue>
#include<map>
#include<vector>
#include<iostream>
#include<algorithm>
#define maxn 10050
#define INF 0x3f3f3f3f
using namespace std;
typedef long long ll;

int n;
bool judge(int x)
{
    int tmp=x,ans=0;
    while(tmp)
    {
        ans+=tmp%10;
        tmp/=10;
        if(ans>10)return false;
    }
    return ans==10;
}


int main()
{
    cin>>n;
    int num=0;
    for(int i=19;;i++)
    {
        if(judge(i))
            num++;
        if(num==n)
        {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}