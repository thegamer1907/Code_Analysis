#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,t;
    cin >> n >> t;
    vector<int> numbers(n);
    for(int i = 0;i < n;i++)
        scanf("%d",&numbers[i]);

    int i = 0;
    int j = 0;
    int maxe = 0;
    while(j < n && i < n)
    {
        if(numbers[j] <= t)
        {
            t -= numbers[j];
            j++;
        } else {
            maxe = max(maxe,j-i);
            t += numbers[i];
            i++;
        }
    }
    maxe = max(maxe,j-i);
    cout << maxe;
    return 0;
}
