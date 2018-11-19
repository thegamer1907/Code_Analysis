#include <bits/stdc++.h>
#define OO 1e9
#define ll long long
using namespace std;

int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    double h, m, s, t1, t2;
    double arr[3];
    cin >> arr[0] >> arr[1] >> arr[2] >> t1 >> t2;
    arr[0] += arr[1] / 60 + arr[2] / 3600;
    arr[1] += arr[2] / 60;
    arr[0] *= 5;
    if(arr[0] >= 60) arr[0] -= 60;
    if(arr[1] >= 60) arr[1] -= 60;
//    if(t1 == 12)t1 = 0;
//    if(t2 == 12)t2 = 0;
//    if(arr[0] == 12)arr[0] = 0;
    t1 *= 5;
    t2 *= 5;
//    arr[0] *= 5;
//    cout << arr[0] << ' '<< arr[1] << ' ' << arr[2] << ' ' << t1 << ' ' << t2 << endl;
    sort(arr, arr+3);
    arr[1] -= arr[0];
    arr[2] -= arr[0];
    t1 -= arr[0];
    t2 -= arr[0];
    arr[0] = 0;
    if(t1 < 0)t1 += 60;
    if(t2 < 0)t2 += 60;
//    cout << arr[0] << ' '<< arr[1] << ' ' << arr[2] << ' ' << t1 << ' ' << t2 << endl;
    if(t1 >= 0 && t1 <= arr[1] && t2 >= 0 && t2 <= arr[1]){
        cout << "YES";
        return 0;
    }
    if(t1 >= arr[1] &&  t1 <= arr[2] && t2 >= arr[1] && t2 <= arr[2]){
        cout << "YES";
        return 0;
    }
    if(t1 >= arr[2] && t2 >= arr[2]){
        cout << "YES";
        return 0;
    }
    cout << "NO";

    return 0;
}
