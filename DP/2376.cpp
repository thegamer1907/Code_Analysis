#include <bits/stdc++.h>
using namespace std;

int a[150000];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int answer = 0;
    int index = 0;
    for(int i = 0; i < k; i++)
        answer += a[i];

    int sum = answer;
    for(int i = 1; i < n - k + 1; i++)
    {
        sum -= a[i-1];
        sum += a[i+k-1];
        if(sum < answer)
        {
            index = i;
            answer = sum;
        }
    }
    cout << index + 1;
    return 0;
}


