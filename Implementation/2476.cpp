#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *quantity = new int [n];
    int out, in;
    cin >> out >> in;
    quantity[0] = in;
    for(int i = 1; i < n; i++)
    {
        cin >> out >> in;
        quantity[i] = quantity[i-1] - out + in;
    }

    int maximum = 0;
    for(int i = 1; i < n; i++)
    {
        if(quantity[maximum] < quantity[i])
            maximum = i;
    }

    cout << quantity[maximum];

    delete [] quantity;
    return 0;
}
