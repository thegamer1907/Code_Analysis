#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long n,k;
    cin>>n>>k;
    long a[n][k];
    vector <bool> kt(17,0);
    for (long i=0; i<n; ++i)
    {
        long tmp=0;
        for (long j=0; j<k; ++j)
        {
            cin>>a[i][j];
            tmp=tmp+a[i][j]*(1<<j);
        }
        kt[tmp]=1;
    }
    for (long i=0; i<17; ++i)
        for (long j=0; j<17; ++j)
            if (kt[i] && kt[j])
                if ((i&j)==0)
                {
                    cout<<"YES";
                    return 0;
                }
    cout<<"NO";
}
