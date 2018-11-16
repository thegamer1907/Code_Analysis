#include <bits/stdc++.h>

using namespace std;

int flip(int x[], int i1, int j, int n)
{
    int *arr=(int *)malloc(n*sizeof(int));

    for(int i=0; i<n; i++)
    {
        arr[i]=x[i];
    }
    int ones=0;
    for(int i=i1; i<=j; i++)
    {

        arr[i]=1-arr[i];

    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]==1)
        {
            ones++;

        }
    }
    return ones;
}

int main()
{
    int n, a[101], j=-1, i1=-2, ones=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i]==0)
        {
            j=i;
        }
    }
    if(n==1 && a[0]==1)
    {
        printf("0\n");
        return 0;
    }

    for(int i=0; i<n; i++)
    {
        if(a[i]==0)
        {
            i1=i;
            break;
        }
    }
    if(j==i1)
    {
        printf("%d\n", n);
        return 0;
    }

    if(i1>=0 && j>=0 && i1!=j)
    {
        for(int i=i1, l=i+1; i<j; l++)
        {

            int p=flip(a, i, l, n);
            if(ones<p)
            {
                ones=p;

            }
            if(l==j)
            {
                i++;
                l=i;
            }

        }
    }
    if(i1<=0 && j<=0){
        ones=n-1;
    }



    cout<<ones<<endl;

    return 0;
}
