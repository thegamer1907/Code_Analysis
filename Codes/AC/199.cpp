#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;  cin>>n;
    vector<int> nums(n);
    cin>>nums[0];
    for(int i=1;i<n;i++)
    {
        int temp;   cin>>temp;
        nums[i]=nums[i-1]+temp;
    }
    int m;  cin>>m;
    while(m--)
    {
        int temp;   cin>>temp;
        int ans=lower_bound(nums.begin(),nums.end(),temp)-nums.begin();
        cout<<ans+1<<"\n";
    }
    return 0;
}
