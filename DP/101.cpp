#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,m;
    cin >> n;
    long long boy[n];
    for(int i =0; i<n; i++)
    {
        cin >> boy[i];
    }
    cin >> m;
    long long girl[m];
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











