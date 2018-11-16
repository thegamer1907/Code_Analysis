#include<bits/stdc++.h>
using namespace std;
int arr[100100];
int dp[100100];
int temp[100100];
int main()
{
    int n,k,i,j,angka;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&temp[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        arr[temp[i]]++;
        if(arr[temp[i]] == 1)
        {
            dp[i] = dp[i+1] + 1;
        }
        else
        {
            dp[i] = dp[i+1];
        }
    }
    for(i=0;i<k;i++)
    {
        scanf("%d",&angka);
        printf("%d\n",dp[angka-1]);
    }
    return 0;
}
