#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e4+100;
long long num[maxn],tot = 0;

long long get_sum(int x)
{
    int sum = 0;
    while(x)
    {
        int temp = x%10;
        sum += temp;
        x /= 10;
    }
    return sum;
}

int main()
{
    int n;
    scanf("%d",&n);
    for(long long i=19;;i++)
    {
        long long sum = get_sum(i);
        if(sum == 10)
        {
            tot++;
            if(tot == n)
            {
                printf("%lld",i);
                break;
            }
        }
    }
    return 0;
}