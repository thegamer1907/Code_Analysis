#include <iostream>
#include <cmath>

using namespace std;

int n, k, x;
int pbType[16][5] = {0, 0, 0, 0, 0,
                     1, 0, 0, 0, 0,
                     0, 1, 0, 0, 0,
                     1, 1, 0, 0, 0,
                     0, 0, 1, 0, 0,
                     1, 0, 1, 0, 0,
                     0, 1, 1, 0, 0,
                     1, 1, 1, 0, 0,
                     0, 0, 0, 1, 0,
                     1, 0, 0, 1, 0,
                     0, 1, 0, 1, 0,
                     1, 1, 0, 1, 0,
                     0, 0, 1, 1, 0,
                     1, 0, 1, 1, 0,
                     0, 1, 1, 1, 0,
                     1, 1, 1, 1, 0};

bool isOk (int val)
{
    int use[16] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, nrPb = 0;

    for (int i = 0; i <= 15 && val; i++)
    {
        use[i] = val&1, val = val >> 1;
        if (use[i])
        {
            nrPb++;
            if (!pbType[i][4]) return false;
        }
    }

    int nr[4] = {0, 0, 0, 0};
    for (int i = 0; i <= 15; i++)
        if (use[i])
            for (int j = 0; j < k; j++) nr[j] += pbType[i][j];

    for (int j = 0; j < k; j++)
        if (nr[j] > nrPb / 2) return false;

    return true;
}

int main()
{
    cin >> n >> k;

    int i, j;
    for (i = 1; i <= n; i++)
    {
        int value = 0;
        for (j = 0; j < k; j++)
        {
            cin >> x;
            value += pow (2, j) * x;
        }

        pbType[value][4] = 1; //retin configuratiile pt pb
    }

    int iMax = pow (2, pow (2, k));
    for (i = 1; i < iMax; i++) //bkt
    {
        if (isOk (i))
        {
            cout << "YES\n";
            break;
        }
    }

    if (i == iMax) cout << "NO\n";
    return 0;
}

  		 			 	 	 						 	  			 			