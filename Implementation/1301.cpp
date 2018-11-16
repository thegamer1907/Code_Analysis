#include <iostream>

using namespace std ;

int main ()
{
    int q ;
    cin >> q ;
    int s ;
    cin >> s ;
    string k ;
    cin >> k ;
    for(int j =0 ; j < s ; j++ )
    {
        for(int i = 0 ; i < q ; i++ )
        {
            if(k[i]=='B'&&k[i+1]=='G')
            {
                k[i] = 'G' ;
                k[i+1] = 'B' ;
                i++ ;
            }else{
                }
        }
    }
    for(int i = 0 ; i < q ; i++ )
    {
        cout << k[i] ;
    }
}
