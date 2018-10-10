#include <iostream>

using namespace std;

int res[1000005];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int arr[n];
    int temp = 1;

    for (int i = 0; i<n; i++)
    {
        cin >> arr[i];
        for (int j = temp; j<temp+arr[i]; j++)
        {
            res[j] = i+1;
        }
        temp = temp + arr[i];
    }
    int m;
    cin >> m;
    int num;
    for (int i = 0; i<m; i++)
    {
        cin >> num;
        cout << res[num] << "\n";
    }
    return 0;
}
