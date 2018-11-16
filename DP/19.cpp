#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m;
    cin>>n;
    int arr1[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr1[i];
    }

    cin>>m;
    int arr2[m];
    for(int i=0; i<m; i++)
    {
        cin>>arr2[i];
    }

    sort(arr1,arr1+n);
    sort(arr2,arr2+m);

    int cnt=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(arr1[i]==arr2[j] || arr1[i]==(arr2[j]+1) || arr1[i]==(arr2[j]-1))
            {
                cnt++;
                arr2[j]=INT_MIN;

                break;
            }
        }
    }
    cout<<cnt<<endl;

    return 0;
}
