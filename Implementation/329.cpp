#include <iostream>

using namespace std;

int main()
{
    int n,k,a=0,y=0;
    cin >> n >> k;
    int x[100];
    for (int i=0; i < n; i++)
    { cin >> x[i];
        if (x[i]==0)
        {
            a++;
        }
        if (a==n)
        {
        cout << x[i];
        return 0;
        }
    }
    for (int z=0; z < n; z++)
    {
            if (x[z] >= x[k-1])
            {
                if (x[z]==0)
                    continue;
                y++;
            }
    }
    cout << y <<endl;
    return 0;
}
