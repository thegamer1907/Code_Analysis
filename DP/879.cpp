#include <iostream>
#include <map>
#include <set>
#include <queue>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdio>
#include <cstdlib>

using namespace std;


int a[111],n,i,j,k;

int main()
{
    ios_base::sync_with_stdio(0);

    cin >> n;

    for (i=0;i<n;i++)
        cin >> a[i];
    int maxi=-10000;
    for (i=0;i<n;i++)
        for (j=i;j<n;j++){
            int sum=0;
            int realsum=0;
            for (k=i;k<=j;k++){
                sum+=(1-a[k]);
                realsum+=a[k];
            }
            if (sum-realsum>maxi) maxi=sum-realsum;
        }
    int sum=0;
    for (i=0;i<n;i++)
        sum+=a[i];

    sum+=maxi;

    cout << sum;

    return 0;
}
