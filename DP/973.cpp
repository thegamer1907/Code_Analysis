#include <bits/stdc++.h>

using namespace std;

int cnt[2];

int get_max_sum(vector <int> &arr)
{
    int i,val,n=arr.size();
    int curr_max=(arr[i]==0)?1:-1,res=curr_max;
    for(i=1;i<n;i++){
        val=(arr[i]==0)?1:-1;
        curr_max=max(val,curr_max+val);
        res=max(res,curr_max);
    }
    return res;
}

int main()
{
    int i,n;
    cin >> n;
    vector <int> arr(n);
    for(i=0;i<n;i++){
        cin >> arr[i];
        cnt[arr[i]]++;
    }
    //cout << cnt[1] << endl ;
    cout << cnt[1]+get_max_sum(arr) << endl;
}
