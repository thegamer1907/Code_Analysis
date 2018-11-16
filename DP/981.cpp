#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n], b[n];
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
        b[i] = (a[i] == 1)? -1 : 1;
    }
    
    int tot = a[0], mxC = b[0], mxS = b[0]; 
    
    for(int i = 1; i < n; i++)
    {
        tot+=a[i];
        mxC = max(b[i], mxC + b[i]);
        mxS = max(mxC, mxS);
    }
    
    
    cout<<tot+mxS;
    return 0;
}
