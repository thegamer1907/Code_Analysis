#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int x[100],y[100],i,n,z[100],sum_x=0,sum_y=0,sum_z=0;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> x[i] >> y[i] >> z[i];
        sum_x+=x[i];
        sum_y+=y[i];
        sum_z+=z[i];
    }
    if(sum_x==0 && sum_y==0 && sum_z==0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
