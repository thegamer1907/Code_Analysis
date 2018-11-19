#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ii> vii;
int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    bool A[k];
    memset(A, false, sizeof(A));
    int grid[n][k], cnt, mcnt = 0;
    for (int i = 0; i < n; i++)
    {
        cnt = 0;
        for (int j = 0; j < k; j++)
        {
            cin >> grid[i][j];
            if (!grid[i][j])
            {
                cnt++;
                A[j] = true;
            }
        }
        mcnt = max(mcnt, cnt);
    }
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<k;j++)
    //     {
    //         cout<<grid[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    for (int i = 0; i < k; i++)
    {
        if (A[i] == false)
        {
            // for(int i=0;i<k;i++)
            //     cout<<A[i]<<" ";
            cout << "no" << endl;
            return 0;
        }
    }
    int flagarr[6];
    memset(flagarr, 0, sizeof(flagarr));
    if (mcnt >= (k - 1))
    {
        cout << "yes" << endl;
        return 0;
    }
    else
    {
        if (k != 4)
        {
            cout << "NO" << endl;
            return 0;
        }
        else
        {
            if (mcnt == 2)
            {
                for (int i = 0; i < n; i++)
                {
                    if (!grid[i][0] && !grid[i][1])
                        flagarr[0] = 1;
                    else if (!grid[i][0] && !grid[i][2])
                        flagarr[1] = 1;
                    else if (!grid[i][0] && !grid[i][3])
                        flagarr[2] = 1;
                    else if (!grid[i][1] && !grid[i][2])
                        flagarr[3] = 1;
                    else if (!grid[i][1] && !grid[i][3])
                        flagarr[4] = 1;
                    else if (!grid[i][2] && !grid[i][3])
                        flagarr[5] = 1;
                }
                if (flagarr[0] + flagarr[5] == 2 || flagarr[1] + flagarr[4] == 2 || flagarr[2] + flagarr[3] == 2)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else
            {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    return 0;
}