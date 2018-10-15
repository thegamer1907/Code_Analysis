#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    int arr[n];
    int mx=INT_MIN,mn = INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        if(arr[i]>mx)
            mx=arr[i];
        if(arr[i]<mn)
            mn =arr[i];
    }
    int max_k,min_k;

    max_k = mx+m;
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum = sum+(mx-arr[i]);
    }
    if(m<=sum)
        min_k = mx;
    else
    {
        m = m-sum;
        int d = m/n;
        min_k = mx+d;
        if(m%n!=0)
            min_k++;
    }

    cout << min_k << " " << max_k << endl;
    
   return 0;
}