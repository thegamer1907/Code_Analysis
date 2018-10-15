


#include <iostream>

using namespace std;

int main()
{
    int n, m, inp;
    cin >> n >> m;
    cin >> inp;
    int max = inp, sum = inp, min;
    for(int i = 0; i < n-1; i++)
    {
        cin >> inp;
        if (inp > max)
            max = inp;
        sum += inp;
    }
    sum -= max;
    int new_max = max + m;
    if (n == 1)
        min = new_max;
    else if (m > (max * (n-1) - sum))
    {
        m -= (max * (n-1) - sum); // 1
        min = max + (m / n) + ((m % n > 0) ? 1 : 0);

    }
    else
    {
        min = max;
    }
    
    cout << min << " " << new_max << endl;
    return 0;
}
