#include <iostream>
//#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int answer = 0;
    int p, q;
    for(int i = 0; i < n; i++)
    {
        cin >> p >> q;
        if(q - p > 1)
            answer++;
    }
    cout << answer;
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
