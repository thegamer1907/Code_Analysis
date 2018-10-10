#include<bits/stdc++.h>
using namespace std;

int a[1500];

int main()
{
	int n,l;
	cin>>n>>l;
	for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    double ma=max(1.0*a[0],1.0*(l-a[n-1]));
    for(int i=1;i<n;i++)
    {
        ma=max(ma,1.0*0.5*(1.0*a[i]-1.0*a[i-1]));
        //cout<<ma<<endl;
    }
    printf("%.10lf\n",ma);
}
