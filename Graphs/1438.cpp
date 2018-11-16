#include<iostream>
using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;
    int i, keep=0, *p;
    p = new int[n];

    for(i=1; i<n; i++)
        cin >> p[i];

    for(i=1; i<n && i<d; )
    {
        i = i + p[i];
    }
    if(i==d)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    delete []p;
    return 0;
}
