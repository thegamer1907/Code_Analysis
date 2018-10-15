#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,m,i,k,low,ma,cnt=0,t;
    cin>>n;
    vector <long long int> a;
    for (i=0;i<n;i++)
    {
        cin>>m;
        a.push_back(m);
    }
    sort(a.begin(),a.end(),greater<long long int>());
    m=n/2;
    i=0;
    for(;;)
    {
        if (a[i]>=2*a[m])
        {
            a[m]=0;
            i++;
            m++;
        }
        else
        {
            m++;
        }
        if (m==n)
            break;
            
    }
    for (i=0;i<n;i++)
        if(a[i]>0)
            cnt++;
    cout<<cnt;
    return 0;
}