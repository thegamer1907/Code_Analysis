#include <iostream>
#include <cstring>
#include <stdio.h>
#include <algorithm>
using namespace std;
// O(log (min(a, b))
int GCD (int a, int b)
{
    return (!b)? a : GCD(b, a%b);
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n , arr[500000];
    cin >> n;
    for(int i=0 ; i<n ; i++) cin >> arr[i];
    sort(arr, arr+n);
    int low = n/2-1, high=n-1, s=n;
    while(high>=0 && low>=0)
    {
        if(arr[high]>= (2*arr[low]) && arr[low]!=-1)
        {
            high--;
            arr[low]=-1;
            low--;
            s--;
        }
        else if (arr[high]==-1)
            high--;
        else low--;
    }
    cout << s << endl;
    return 0;
}