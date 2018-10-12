#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> v(n);
    for(int i=0;i<n;i++)
     cin>>v[i];
     int maxi=*max_element(v.begin(),v.end());
     int sum=accumulate(v.begin(),v.end(),0);
     cout<<max(maxi,(sum+m-1)/n+1)<<" "<<maxi+m;
     return 0;
}
    