#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    vector<int> v;
    v.push_back(-1);
    int m=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a[i]=x;
        if(x==0)
        {
            v.push_back(i);
        }
        if(x==1) m=1;
    }
    if(v.size()-1<=k)
    {
        cout<<n<<endl;
        for(int i=0;i<n;i++)
            cout<<"1 ";
        return 0;
    }
    v.push_back(n);
    int ind=0;
    
    for(int i=1;i<v.size()-k;i++)
    {
        if(m<v[i+k]-v[i-1]-1)
        {
            ind=v[i];
            m=v[i+k]-v[i-1]-1;
        }
    }
    cout<<m<<endl;
    int j=0;
    for(int i=0;i<n;i++)
    {
        if((ind<=i && a[i]==0) && j<k)
        {
            a[i]=1;
            j++;
        }
        cout<<a[i]<<" ";
    }
}