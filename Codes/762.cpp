
 #include<bits/stdc++.h>
using namespace std;
int func(long long n)
{
    long long sum=0;
    while(n)
    {
        sum=sum+(n%10);
        n/=10;
    }
    if(sum==10)
        return 1;
    else
        return 0;
}
int main()
{
    int k;
    scanf("%d",&k);
    long long n=1;
    while(k>0)
    {
        if(func(n))
            k--;
        n++;
    }
    printf("%lld",--n);
    return 0;
}