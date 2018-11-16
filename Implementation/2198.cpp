#include <iostream>
//#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x, y, z;
    int sumX = 0, sumY = 0, sumZ = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> x >> y >> z;
        sumX += x;
        sumY += y;
        sumZ += z;
    }

    if(sumX || sumY || sumZ)
        cout << "NO";
    else
        cout << "YES";

    return 0;
}

/*
for(int k = n/2; k > 0; k /= 2)
{
    for(int i = k; i < n; i++)
    {
        int j;
        int temp = a[i];
        for(j = i; j >= k; j -= k)
        {
            if(temp > a[j-k])
                a[j] = a[j-k];
            else
                break;
        }
        a[j] = temp;
    }
}
*/
