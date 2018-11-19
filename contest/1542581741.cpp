#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

bool between(double t1, double t2, double str)
{
    if ((str > t1 && str < t2) || str < t1 && str > t2) return true;
    return false;
}

int main()
{
    double arr[3];
    double t1, t2;

    cin >> arr[0] >> arr[1] >> arr[2] >> t1 >> t2;

    arr[1] = arr[1] + arr[2] / 60;

    arr[0] = fmod((arr[0] + arr[1] / 60) * 5, 60) ;

    t1 *= 5;
    t2 *= 5;

    sort(arr, arr + 3);

    if (t1 > arr[0] && t1 < arr[1] && t2 > arr[0] && t2 < arr[1]) return cout << "YES", 0;
    if (t1 > arr[1] && t1 < arr[2] && t2 > arr[1] && t2 < arr[2]) return cout << "YES", 0;
    if (((t1 > arr[2] && t1 <= 60) || (t1 >= 0 && t1 < arr[0])) &&  ((t2 > arr[2] && t2 <= 60) || (t2 >= 0 && t2 < arr[0]))) return cout << "YES", 0;

    cout << "NO";

    return 0;
}
