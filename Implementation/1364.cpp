#include <iostream>
using namespace std;

int main()
{
    int time , child      ; string x ;
    cin >> child  >> time ; cin >> x ;

    for (int i=0 ; i<time ; i++)
        for (int j=0 ; j<child ; j++)
            if ( x[j] == 'B' && x[j+1] == 'G')
                swap (x[j] , x[j+1]) , j++ ;
    cout << x ;
    return 0;
}
