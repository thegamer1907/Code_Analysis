#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <cmath>


#define pb push_back
#define mp make_pair

using namespace std;



int main()
{
 ios_base::sync_with_stdio(false);

    string p, temp;
    bool prvi = false, drugi= false;
    cin >> p;
    int n;
    cin >> n;
    for( int i = 0; i  <n; i++ )
    {
        cin >> temp;
        if( temp == p  )
        {
            cout << "YES" << endl;
            return 0;
        }
        if( temp[1] == p[0] )
            prvi = true;
            if( temp[0] == p[1] )
                drugi =  true;
    }
    if( prvi == true && drugi == true )
        cout << "YES" << endl;
    else cout << "NO" << endl;


return 0;
}






















