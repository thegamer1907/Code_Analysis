#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    unordered_set<int> s;

    cin>>n>>m;
    int arr[n],arr1[m];
    for(int i = 0; i < n ; i++)
        cin>>arr[i];

    for(int i = n-1; i >= 0 ; i--)
    {
      s.insert(arr[i]);
      arr[i]=s.size();
    }
    for(int i = 0; i < m ; i++)
       cin>>arr1[i];
    for(int i = 0; i < m ; i++)
        cout<<arr[arr1[i]-1]<<endl;
    return 0;
}
