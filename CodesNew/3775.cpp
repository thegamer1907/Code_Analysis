#include <algorithm>
#include <iostream>
#include <cstring>
#include <cstdio>
#include <cmath>
using namespace std;
int n,a[106],m,big, small;
int main()
{
    int n, m, sum = 0;
    cin >> n >> m;
    for(int i = 1; i <= n;  i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a+1, a+n+1);
    int big = a[n] + m;
    sum+=m;
    int small = sum/n;
    if(sum%n!=0)
        small ++;
    cout << max(small, a[n]) << " " << big << endl;
}
