#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(0) , cin.tie(0) , cout.tie(0);

    long long n , k ;
    cin >> n >> k ;
    int counter = 1 ;
    while(1)
    {

        if(k%2==1)
        {
            cout << counter ;
            return 0 ;
        }

        counter++;
        k /=2;
    }

    return 0 ;
}
