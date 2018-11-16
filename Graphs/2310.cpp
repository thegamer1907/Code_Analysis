#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int depth (vector<int> & arr,int n)
{
    if (arr[n]==-1)
    return 1;
    return (1+depth(arr,arr[n]));
}
int main() {
    int n;
    cin>>n;
    vector<int> arr(n+1,-1);
    for (int i=1; i<=n; i++)
    {
        int temp;
        cin>>temp;
        arr[i]=temp;
    }
    int max=0;
    for (int i=1; i<=n; i++)
    {
        int t=depth(arr,i);
        if (t>max)
        max=t;
    }
    cout<<max;
	// your code goes here
	return 0;
}
