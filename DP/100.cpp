#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int m;
    cin >> m;
    int arr[m];
    for(int i = 0; i < m; i++){
        cin >> arr[i];
    }
    sort(arr, arr + m);
    int n;
    cin >> n;
    int ar[n];
    for(int i = 0; i < n; i++){
        cin >> ar[i];
    }
    sort(ar, ar + n);
    int result = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(abs(arr[i] - ar[j]) <= 1){
                ar[j] = 100000;
                result++;
                break;
            }
        }
    }
    cout << result << endl;
    return 0;
    
}