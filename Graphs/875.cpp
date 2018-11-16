#include<bits/stdc++.h>

using namespace std;

int main()

{
    
    int n, t, b, m=1;
    
    cin>>n>>t;
    
    vector<int> a;
    
    for (int i=0;i<n-1;i++)
    {
        cin>>b;
        
        a.push_back(b);
    }
    
    while (m<t)
    {
        m=m+a[m-1];
    }
    
    if (m==t)
    {
        cout<<"YES";
    }
    
    else
    {
        cout<<"NO";
    }
    
    
}

