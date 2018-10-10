#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fori(it, x) for (__typeof((x).begin()) it = (x).begin(); it != (x).end(); it++)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n;
    vector <int> a;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        if(i==0)
            a.push_back(m);
        else
            a.push_back(m+a[i-1]);
    }
    cin>>m;int x;
    while(m--)
    {
        cin>>x;int flag=0;
        int beg=0,end=n-1;
        while(beg<end)
        {
            int mid=(beg+end)/2;
            if(a[mid]==x)
            {
                flag=1;
                cout<<mid+1<<endl;
                break;
            }
            else if(a[mid]<x)
                beg=mid+1;
            else
                end=mid;
        }
        if(flag==0)
            cout<<beg+1<<endl;
    }
}
