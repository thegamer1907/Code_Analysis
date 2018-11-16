#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int n ,ans = 0 , m , x;
    cin >> n;
    int a[n] , b[101];
    for(int i = 0 ; i < 101 ; i++)
        b[i] = 0;
    for(int i = 0 ; i < n ; i++)
        cin >> a[i];
    sort(a ,a + n);
    cin >> m;
    int c[m];
    for(int i = 0 ; i < m ; i++)
        cin >> c[i];
    sort(c , c + m);
    for(int i = 0 ; i < n ; i++)
        for(int j = 0 ; j < m ; j++)
        {
            if((abs(a[i] - c[j]) == 1 || a[i] == c[j])&& !b[j])
            {
                ans++;
                b[j] = 1;
                break;
            }
        }
    cout << ans;
    return 0;
}