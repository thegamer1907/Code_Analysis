#include<bits/stdc++.h>
using namespace std;
main()
{
    long int n,t,i,j,k;
    cin >> n >>t;
    long int arr[n-1];
    for(i=0;i<n-1;i++)
        cin >> arr[i];
    long int cell=1,c=0;
    for(i=cell;i<=n-1;)
    {
        cell=cell+arr[cell-1];
        if(cell==t)
        {
            c=1;
            break;
        }
        i=cell;
    }
    if(c==1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
