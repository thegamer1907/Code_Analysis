#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> worms(n);
    vector<int> StartPoints(n+1);
    int sum = 0;
    for(int i = 0;i < n;i++)
    {
        scanf("%d",&worms[i]);
        sum += worms[i];
        StartPoints[i+1] = sum+1;
    }
    StartPoints[0] = 1;
    int m;
    cin >> m;
    for(int i = 0;i < m;i++)
    {
        int x;
        scanf("%d",&x);
        int lo = 0;
        int hi = StartPoints.size()-1;
        while(lo != hi)
        {
            int mid = (lo + hi)/ 2;
            if(StartPoints[mid] <= x)
                lo = mid+1;
            else
                hi = mid;
        }
        printf("%d\n",lo);
    }
    return 0;
}
