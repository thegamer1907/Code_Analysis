#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
    int n,m;

    cin>>n>>m;

    int a[n],sum=0;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }

    sort(a,a+n);

    int m1=a[n-1]+m;

    int m2=ceil((double)(sum+m)/n);

    m2=max(m2,a[n-1]);

    cout<<m2<<" "<<m1<<endl;
}
