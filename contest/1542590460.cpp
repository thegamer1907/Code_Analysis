#include <iostream>

using namespace std;

char v[4], caine[4];

int main()
{
    int n, cnt_1 = 0, cnt_2 = 0;
    cin>>(v+1);
    cin>>n;
    for ( int i = 1; i <= n; ++i )
    {
        cin>>(caine+1);
        if ( caine[1] == v[1] && caine[2] == v[2] )
        {
            cnt_1++;
            cnt_2++;
        }
        if ( caine[1] == v[2] )
            cnt_1++;
        if ( caine[2] == v[1])
            cnt_2++;
    }
    if ( cnt_1 == 0 || cnt_2 == 0 )
        cout<<"NO";
    else
        cout<<"YES";
}
