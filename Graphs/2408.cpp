#include <iostream>
#include <map>

using namespace std;

int main()
{
    map < int, int > m;
    int n;
    cin >> n;
    for( int i = 1 ; i <= n ; i++ ){
        cin >> m[i];
    }
    int res = -1;
    for( int i = 1 ; i <= n ; i++ ){
        int c = 1, j = i;
        while( m[j] != -1 ){
            c++;
            j = m[j];
        }
        res = max( res, c);
    }
    cout << res;
    return 0;
}
