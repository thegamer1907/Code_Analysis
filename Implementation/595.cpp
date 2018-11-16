#include<bits/stdc++.h>
using namespace std;
int n,k,x,m;
int arr[105];
int main()
{
    cin >> n >> k;
    m = 0;
    int jumlah = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        arr[i] = x;
    }
    for (int i = 1; i <= n; i++)
    {
        jumlah += arr[i];
    }

    if (jumlah == 0)
    {
        cout << 0 << endl;
    }else
    {
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] == 0 && arr[k] == 0)
            {
                m + 0;
            }else if(arr[i] >= arr[k])
            {
                m++;
            }
        }
        cout << m << endl;
     }
}

