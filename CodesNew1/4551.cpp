#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    vector <int> v;
    int p;
    for(int i=0;i<n;i++)
    {
        cin>>p;
        v.push_back(p);
    }    
    sort(v.begin(),v.end());
    int k=0;
    for(int i=0;i<n/2;i++)
    {
        while(i+(n+1)/2+k<=n-1&&2*v[i]>v[i+(n+1)/2+k])
            k++;
    }
    cout<<(n+1)/2+k;
    return 0;
}        