#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,count=0;
    cin >> n >> k;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>0 && a[i]>=a[k-1])
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}