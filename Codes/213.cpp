#include <iostream>
#include <cstdio>

using namespace std;

int a[100005];

int main()
{
    int n;
    scanf("%d" , &n);
    for(int i=0 ; i<n ; ++i)
        scanf("%d" , &a[i]);
    for(int i=1 ; i<n ; i++)
        a[i] += a[i-1];
    int m;
    scanf("%d" , &m);
    while(m--)
    {
        int x;
        scanf("%d" , &x);
        int l = 0 , r = n-1 , hold;
        bool b = true;
        for(int mid=(l+r)>>1 ; l<=r ; mid=(l+r)>>1)
        {
            if(a[mid] < x)
                l = mid + 1;
            else if(a[mid] > x)
            {
                r = mid - 1;
                hold = mid;
            }
            else
            {
                printf("%d\n" , mid+1);
                b = false;
                break;
            }
        }
        if(b)
            printf("%d\n" , hold+1);
    }
    return 0;
}