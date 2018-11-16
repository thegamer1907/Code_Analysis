#include<bits/stdc++.h>

using namespace std;

int n, a[110], k, mx, t;

int main() {
    cin >> n;
    for(int i = 1;i <= n;i++){
        cin >> a[i];
        if(a[i] == 1)
        {
            t++;
        }
    }
    for(int l = 1;l <= n;l++)
    {
        for(int r = l;r <= n;r++)
        {
            k = 0;
            for(int i = l;i <= r;i++)
            {
                if(a[i] == 0)
                {
                    k++;
                }
            }
            mx = max(mx, t - r + l - 1 + k + k);
        }
    }
    cout << mx;
}
