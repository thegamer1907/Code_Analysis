#include <iostream>

using namespace std;

int main()
{
    int n , t ;
    cin >> n >> t ;
    char x[n];
    cin >> x ;
    for (int i = t ; i > 0 ; i--)
    {
        for (int j = 0 ; j < n-1 ; j++)
        {
            if(x[j]=='B'&&x[j+1]=='G')
            {
                swap(x[j],x[j+1]);
                j++;
            }
        }
    }
    cout <<x ;
}