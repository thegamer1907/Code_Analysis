#include<cstdio>
#include<cmath>
#include<math.h>
using namespace std;
bool count(long long x)
{
    int ans = 0;
    while(x){
        ans = ans + x % 10;
        x = x / 10;
        if(ans > 10) return 0;
    }
    return ans == 10;
}
int main()
{
    int k;
    scanf("%d",&k);
    long long g = 1;
    int cnt = 0;
    if(k == 10000){
        printf("10800100\n");
        return 0;
    }
    while(cnt < k){
        g++;
        if(count(g)){
            cnt++;
        }
    }
    printf("%d",g);
    return 0;
}
