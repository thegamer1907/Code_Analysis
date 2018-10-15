#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    int ans=n;
    int pt = n/2;
    for(int i=0;i<n/2;i++)
    {
        for(;pt<n;pt++)
        {
            if(2*v[i]<=v[pt])
            {
                // pt++;
                ans--;
                pt++;
                break;
            }
            // else
            // {
            //     pt++;
            // }
        }
        if(pt==n)
            break;
    }
    cout<<ans;
    return 0;
}
