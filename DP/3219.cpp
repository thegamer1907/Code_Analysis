#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main () {
    int n,b,x=0,y=0;
    cin>>n>>b;
    int a[n];
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        if(a[i]&1)
            y++;
        else
            x++;
        if(x==y)
        {
            v.push_back(abs(a[i+1]-a[i]));
        }
    }
    ll sum=0,count=0;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        if(sum+v[i]<=b)
            {
                sum+=v[i];
                count++;
            }
        else
            break;
    }
    cout<<count<<endl;
    return 0;

}