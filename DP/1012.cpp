#include <stdio.h>
#include <bits/stdc++.h>
#include<set>
#include <queue>
#include<vector>
#include<map>
#include <algorithm>
#include <string>
#include <climits>
#include<set>
#include <utility>
#define mp make_pair
#define pb push_back
#define in cin>>
#define out cout<<
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ull unsigned long long int
#define ui unsigned int
#define gr  vector<vector<int>>
#define ll long long int
#define ci const int
#define vu vector<ull>
#define vui vector<ui>
#define vi  vector<int>
#define MOD 1000000007
#define wt while(t--)
using namespace std;
int main()
{
    int n;
    in n;
    int maxSum = INT32_MIN;
    int sum = 0;
    int count1=0;
    int temp;
    for (int i = 0; i <n ; ++i)
    {
        in temp;
        if(temp==1)
        {
            ++count1;
            sum+=-1;
        }
        else
        {
            sum+=1;
        }
        if(sum>maxSum)
        {
            maxSum = sum;
        }
        if(sum<0)
        {
            sum=0;
        }
    }
    cout<<maxSum + count1<<"\n";
    return 0;
}
/*
int main()
{
    fast
    int n;
    int arr[3];
    in n>>arr[0]>>arr[1]>>arr[2];
    vector < pair<int,int> > dp(n+1,{0,0});
    for (int i = 1; i <=n ; ++i)
    {
        for (int j = 0; j <3 ; ++j)
        {

            if(arr[j]<=i && (dp[i-arr[j]].second+1)>dp[i].second&&dp[i-arr[j]].first+arr[j]==i)
            {
             //   cout<<arr[j]<<"   "<<i<<"\n";
                dp[i].second = dp[i-arr[j]].second+1;
                dp[i].first = dp[i-arr[j]].first+arr[j];
            }
        }
    }
    cout<<dp[n].second;
    return 0;
}
/*
int main()
{
    fast;
    ui n,temp,max=0,len=0;
    in n;
   // vi v(n);
    int prev=INT32_MIN;
    len=0;
    for (int i = 0; i <n ; ++i)
    {
        in temp;
        if(temp>=prev)
        {
            len++;
        }
        else
        {
            len =1;
        }
        prev = temp;
        if(max<len)
        {
            max=len;
        }
    }
    cout<<max<<"\n";
    return 0;
}*/