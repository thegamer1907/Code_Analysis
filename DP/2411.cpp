#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[1000005];
int main()
{
    int n,k,l = 0,tol = 1e8,sum = 0;
    cin >> n >> k;
    for(int i=0;i<n;++i)
    {
        cin >> a[i];
        if(i<k)
        {
            sum += a[i];
            tol = sum;
        }
        else
        {
            sum += a[i];
            sum -= a[i-k];
            if(sum<tol)
            {
                l = i - k + 1;
                tol = sum;
            }
        }
    }
    cout << l + 1 << endl;


    return 0;
}
