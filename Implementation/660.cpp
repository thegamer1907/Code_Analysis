#include <iostream>
using namespace std;

int main()
{
    int x, y ,z, c=0;
    cin >> x >> y;
    int array[x];
    for (int i = 1; i <= x; ++i)
    {
        cin >> array [i-1] ;

    }
    for (int j=1 ; j<=x ; ++j) {
        if (array[j-1] >= array [y-1] ) {
            if ( array [j-1]>0){
            c=c+1;
        }}
    }
    cout << c ;
    return 0;
}
