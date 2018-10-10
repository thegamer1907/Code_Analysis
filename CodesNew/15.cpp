#include <bits/stdc++.h>

using namespace std;

int main ()
{
    long long int n, a,l, arr[1010], i,j,w,temp=0, flag;
    double e, f;
    scanf("%lld %lld", &n, &l);
    for(i=0; i<n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    sort (arr, arr+i);

    for(i=0; i<n-1; i++)
    {
        w = arr[i+1] - arr[i];
        if(w>temp)
        {
            temp = w;
        }
    }


     e = (double) temp/2.0;
     f= (double) l - arr[n-1];
    if(arr[0]>e)
        e =(double) (arr[0]);
    if(f>e)
        e = f;
    printf("%.10lf\n", e);

    return 0;
}