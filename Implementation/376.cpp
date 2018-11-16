#include <iostream>

using namespace std;

int main()
{
    int n,p;
    int a[100];
    int tedad = 0;
    cin >> n >> p;
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    while (n>=1)
        {
            if (a[n-1]>=a[p-1] && a[n-1]>0)
            {
            tedad++;
            }
        n--;
        }

    cout << tedad;
}
