#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,i,j,c=0;
    cin >> n >> k;
    
    int a[n];
    
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    
    j=a[k-1];
    
    for(i=0;i<n;i++)
    {
        if(a[i]>=j && a[i]!=0)
        {
            c++;
        }
    }
    cout << c;
    
    return 0;
    
}