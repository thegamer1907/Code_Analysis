#include <iostream>

using namespace std;

int main()
{
    int t,n,ar[100100];
    cin>>n>>t;
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    int mx=INT_MIN;
    int c=0;

    int s2=0;
    bool b=false;
    int s = 0, e = 0, sum=0;
    while(s < n)
    {
        while(e < n && sum +ar[e] <= t)
        {
            sum += ar[e++];
        }
        mx = max(mx, e - s);
        sum -= ar[s++];
    }
    cout << mx << endl;

    return 0;
}
