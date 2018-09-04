#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 5;
int a[maxn];
int main()
{

    int n;
    cin>>n;
    int minT = INT_MAX;
    int ans = -1;
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i = 0;i<n;i++)
    {
        if(a[i] <= i)
        {
            if(minT > i)
            {
                minT = i;
                ans = i;
            }
            else if(minT == i)
            {
                ans = min(ans,i);
            }
        }
        else
        {
            int temp = n * ((a[i] - i + n -1)/ n);
            //cout<<temp<<endl;
            if(minT > temp)
            {
                ans = i;
                minT = temp;
            }
            else if(minT == temp)
            {
                ans = min(ans,i);
            }
        }
    }
    cout<<ans + 1<<endl;
    return 0;
}
