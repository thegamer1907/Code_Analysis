#include <bits/stdc++.h>

typedef long long lli;
using namespace std;

int main()
{
    lli n,m;
    cin >> n;
    lli boy[n];
    for(int i =0; i<n; i++)
    {
        cin >> boy[i];
    }
    cin >> m;
    lli girl[m];
    for(int i =0; i<m; i++)
    {
        cin >> girl[i];
    }
    sort(boy,boy+n);
    sort(girl,girl+m);
    int j = 0,count=0;
    for(int i=0; i<n ;i++)
    {
        while(j<m && girl[j] <= boy[i]+1)
        {
            if(abs(girl[j] - boy[i]) <= 1)
            {
                j++;
                count++;
                break;
            }
            j++;
        }
    }
    cout << count;
    return 0;
}











