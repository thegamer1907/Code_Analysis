//A. New Year Transportation
#include<iostream>
using namespace std;

int main(void)
{
    int n,t,c = 1;

    cin >> n >> t;

    int *a = new int[n];

    for(int i=0;i<n-1;i++)
    {
        cin >> a[i];
    }

    for(int i=0;i<n-1; )
    {
        c+=a[i];

        //cout << c << endl;

        if(c==t)
        {
            cout << "YES" << endl;
            break;
        }

        else if(c>t)
        {
            cout << "NO" << endl;
            break;
        }

        i = c-1;

    }

    delete [] a;

    return 0;
}
