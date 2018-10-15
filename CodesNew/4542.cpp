#include <bits/stdc++.h>
#define ll long long
#define pause system("pause")
#define pow(x, n) pow(1.0 * (x), n)
#define sqrt(x) sqrt(1.0*(x))
#define pb push_back
#define mp make_pair
#define fori(n) for (int i = 0; i < n; i++)
#define forj(n) for (int j = 0; j < n; j++)
#define fork(n) for (int k = 0; k < n; k++)
#define forstarti(start, finish) for (int i = start; i < finish; i++)
#define forstartj(start, finish) for (int j = start; j < finish; j++)
#define IMPOS "IMPOSIBLE"
#define YES "YES"
#define NO "NO"
#define NA "No answer"
#define pl pop_left
#define pr pop_right
#define mp make_pair
#define PI 3.1415926535
#define _f first
#define _s second
using namespace std;

int main()
{
    int n, a, res=0;
    cin >> n;
    vector <pair <int, int> > arr(n);
    fori(n)
    {
        cin >> a;
        arr[i] = mp(a, 0);
    }
    sort(arr.begin(), arr.end());
    int i = n/2+n%2, j=0;
    while(i<n && j<n/2)
    {
        if(arr[i]._f/2<arr[j]._f)i++;
        else
        {
            arr[j]._s=1;
            i++;
            j++;
        }
    }
    fori(n)
    {
        if(arr[i]._s == 0)res++;
    }
    cout << res;
    return 0;
}
