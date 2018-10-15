#include <iostream>

using namespace std;

int main()
{
    int maxi, ar[100], i, b, p, j=0;

    cin >> b >> p;
    maxi = -1;
    for(i =0 ; i < b ; i++)
        {
            cin >> ar[i];
            j+= ar[i];
            if(ar[i] > maxi)
                maxi = ar[i];
        }

    int n =  (p+j) - maxi*b;

    if( n > 0 )
    {
        if(n%b!=0)
            cout << maxi + 1 + n/b <<" " << maxi+p;

        else
             cout << maxi + n/b << " " << maxi + p;
    }

    else
        cout << maxi << " " << maxi +p;

}
