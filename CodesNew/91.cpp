#include <stdio.h>
#include <algorithm>
using namespace std;
int main()

{
    double l,j,k,m=0;
    int n;
    scanf("%d",&n);
    scanf("%lf",&l);
    double a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lf",&a[i]);

    }

    sort(a,a+n);


    for(int i=0;i<n&&i+1<n;i++)
    {

            if(a[i+1]-a[i]>m)
            {
                m=a[i+1]-a[i];
            }
    }
    j=m/2;
    k=a[0];
    double x;
    x=l-a[n-1];
    double range ;
    if(k>x)
    {
        range=k*2;
    }
    else
        range=x*2;
    if(j>range)
    {
        printf("%.10lf",j);
    }
    else
        printf("%.10lf",range/2);

        return 0;
        }
