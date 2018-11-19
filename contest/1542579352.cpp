#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int arr[100100][4];
int cnt[100];
vector<int>vec;
bool bad[5];
int k;
bool test(int idx , int sum , int base)
{
    if(idx==k)
    {
        return cnt[sum];
    }
    if(bad[idx]) return test(idx+1  , sum , base*2);
    return test(idx+1  , sum+base , base*2) || test(idx+1  , sum , base*2);
}
int main()
{
    int n;
    cin>>n>>k;
    for(int i = 0 ; i<n ; ++i)
    {
        int sum = 0 , x = 1;
        for(int j = 0 ; j<k ; ++j) scanf("%d" , &arr[i][j]) , sum+=arr[i][j]*x , x*=2;
        cnt[sum]++;
    }
    bool flag = 0;
    for(int i = 0 ; i<n && !flag ; ++i)
    {
        memset(bad , 0 ,sizeof bad);
        for(int j = 0 ; j<k ; ++j) bad[j] = arr[i][j];
        flag = test(0,0,1);
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
