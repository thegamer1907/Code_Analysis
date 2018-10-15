#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int MAX =5e5+9;
ll n, k;
int arr [MAX];
int main ()
{
    scanf("%d",&n);
    for (int i = 0 ; i< n ;i++)
            scanf("%d",arr+i);
    sort(arr,arr+n);

    for(int i=n-1, h=n-1; i>=0; i--)
    {
        if(arr[i]*2<=arr[h])h--,k++;
    }
    k=min(k,n/2);
    cout<<n-k;
    return  0 ;
}
