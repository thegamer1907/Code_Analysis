#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n , i , j , k  =INT_MAX;
    scanf("%d",&n);

    int arr[n+5];
    for(i = 0 ; i < n ; i++)
    {
        scanf("%d",arr+i);
        k = min(k,arr[i]);
    }
    for(i = 0 ; i < n ; i++)arr[i] -= k;

    int now = k%n;
    k = 0;
    for(i = now ; i < n ; i++)
    {
        if(arr[i]-k <= 0)return !printf("%d\n",i+1);
        k++;
    }

    for(i = 0 ; i < n ; i++)
    {
        if(arr[i]-k <= 0)return !printf("%d\n",i+1);
        k++;
    }
    return 0;
}
