#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x; int n;
    cin>>x>>n; string arr[n];
    for (int i=0; i<n; i++)
        cin>>arr[i];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
           
            if (arr[i][1]==x[0] && arr[j][0]==x[1])
            {
                cout<<"YES";
                return 0;
            }
        }
    }
    for (int i=0; i<n; i++)
    {
        if(arr[i]==x)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}