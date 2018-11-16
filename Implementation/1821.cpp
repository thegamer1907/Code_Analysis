#include <iostream>

using namespace std;

int main()
{
    int n , Q = 0 , W = 0 , E = 0 , q , w , e ;
    cin >> n ;
    for (int i = 0 ; i < n ; i++)
    {
        cin >> q >> w >> e ;
        Q += q ;
        W += w ;
        E += e ;
    }
    if (Q == 0 && W == 0 && E == 0)
        cout << "YES" << endl ;
    else
        cout << "NO" << endl ;
    return 0;
}
