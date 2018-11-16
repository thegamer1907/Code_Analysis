#include <iostream>

using namespace std;

int main()
{
    int a,j;
    cin >> a >> j;
    int b[a];
    int i=0;
    while (i<a)
    {
        cin >> b[i];
        i++;
    }

    int Count=0;
    while (a>=1)
    {
        if (b[a-1]>=b[j-1] && b[a-1]>0)
        {
            Count++;
        }
        a--;
    }
    cout << Count;
}
