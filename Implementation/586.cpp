#include<iostream>

using namespace std;

int main()
{
    int n , k , a[100],p;

    cin >> n >> k ;

    int count = 0;

    for( int i = 0 ; i < n ; i++)
    {
        cin >> a[i] ;
        if( i+1 == k)
        {
            p = a[i];
        }

    }

    for( int i = 0 ; i < n ; i++)
    {
        if( a[i] >= p && a[i] > 0)
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;

}
