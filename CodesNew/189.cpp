#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n,t;
    
    cin >> n>> t;
    
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    
    long long int ans = 0;
    
    int i=0,j=0;
    
    int count = 0;
    int temp_count = 0;
    // ans = arr[i];
    
    
    if(n == 1)
    {
        if(arr[0] <= t)
        {
            cout << 1 << endl;
            return 0;
        }
        else
        {
            cout << 0 << endl;
            return 0;
        }
    }
    
    while(i<n)
    {
        // cout << "i is " << i << endl;
        while(j < n && ans + arr[j] <= t) 
        {
            ans += arr[j];
            j++;
            temp_count++;
        }
        count= max(count, j-i);
        i++;
        ans -= arr[i-1];
        temp_count--;
    }
    if(ans <= t)
        count = max(temp_count, count);
    
    cout << count << endl;
    
	return 0;
}
