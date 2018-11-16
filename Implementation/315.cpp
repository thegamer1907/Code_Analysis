#include <iostream>
#include <algorithm>

using namespace std;

int main( ) {
    int number,scale,j=0;
    cin>>number>>scale;
    int numbers[number];
    for( int i=0 ; i<number ; i++ ){
        cin>>numbers[i];
    }
    for( int i=0 ; i<number ; i++ ) {
        if( numbers[i]>=numbers[scale-1] && numbers[i]!=0)
            j++;
    }
    cout<<j;
}
