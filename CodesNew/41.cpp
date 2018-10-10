#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n, l, maxii = -1;
int const MAX = 1005;
int arr[MAX];
double maxi = -1.0;
int main()
{
    cin >> n >> l;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    maxii = max(maxii, arr[0]);
    maxi = max(maxii , l - arr[n - 1]);
    for(int i = 1; i < n; i++) {
        maxi = max(maxi , (arr[i] - arr[i - 1]) / 2.0);
    }
    printf("%.10f" , max(maxi, maxii * 1.0));

    return 0;
}
