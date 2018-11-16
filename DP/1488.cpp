#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> vals;

int prefixOne[105];
int prefixZero[105];

int main()
{
    cin >> n;

    vals.push_back(-1);

    for (int i = 0; i < n; i++)
    {
        int x1;
        cin >> x1;
        vals.push_back(x1);
    }

/*
    prefixOne[0] = 0;
    prefixZero[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        vals.push_back(x);
        if (x == 1) {
            prefixOne[i] = prefixOne[i - 1] + 1;
            prefixZero[i] = prefixZero[i - 1];
        }
        else {
            prefixZero[i] = prefixZero[i - 1] + 1;
            prefixOne[i] = prefixOne[i - 1];
        }
    }

    for (int i = 0; i <= n; i++)
        cout << "One, Zero: " << prefixOne[i] << ", " << prefixZero[i] << endl;

    int maxZeroes = 0, minOnes = 1000000000;
    int finalL = -1, finalR = -1;


    for (int lp = 1; lp <= n; lp++)
    {
        for (int rp = lp; rp <= n; rp++)
        {
            if (prefixZero[rp] - prefixZero[lp] >= maxZeroes && prefixOne[rp] - prefixOne[lp] <= minOnes)
            {
                finalL = lp;
                finalR = rp;
                maxZeroes = prefixZero[rp] - prefixZero[lp];
                minOnes = prefixOne[rp] - prefixOne[lp];
            }
            cout << finalL << " " << finalR << " " << maxZeroes << " " << minOnes << endl;
        }
    }
*/

    int maxOnes = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            int tempOnes = 0;
            for (int k = 1; k <= n; k++)
            {
                if (k >= i && k <= j)
                {
                    if (vals[k] == 0)
                        tempOnes++;
                } else
                {
                    if (vals[k] == 1)
                        tempOnes++;
                }
                //cout << i << " " << j << " " << tempOnes << endl;
            }
            maxOnes = max(maxOnes, tempOnes);
        }
    }

    cout << maxOnes << endl;

}
