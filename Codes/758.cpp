#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;
const int N = 10010;
typedef long long ll;
int judge(int num)
{
    int ans = 0;
    while(num)
    {
        ans+=num%10;
        num/=10;
    }
    return ans;
}
vector<int>ans;
int main()
{
    int i = 1;
    ans.push_back(0);
    while(ans.size()<10010)
    {
        if(judge(i)==10)
        {
            ans.push_back(i);
        }
        i++;
    }
    int n;
    scanf("%d",&n);
    printf("%d\n",ans[n]);
	return 0;
}
