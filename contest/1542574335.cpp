#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const double pi = acos(-1);

bool cmp(double a , double b )
{
    return a < b;
}

int main(int argc, char const *argv[])
{
//  freopen("C:\\Users\\tiger\\Desktop\\b.txt", "r", stdin);
    double h,m,s;
    int t1,t2;
    while ( cin >> h >> m >> s >> t1 >> t2 )
    {
        h = h * 5;
        double number[4];
        number[0] = h;
        number[1] = m;
        number[2] = s;
        sort(number, number + 3);
        
        t1 = t1 * 5; t2 = t2 * 5;
        
        if( h == 60 )
        {
            h = 0;
        }
        h = h + 0.25;
        m = m + 0.5;
        number[0] = h;
        number[1] = m;
        number[2] = s;
        double i;
        if ( t1 > t2 )
        {
            int temp = t1;
            t1 = t2;
            t2 = temp;
        }
        
        int ret1 = 1;
        int ret2 = 1;
        for(i = t1; i <= t2 ; i = i + 0.25 )
        {
            if ( i == h || i == m || i == s )
            {
                ret1 = 0;
            }
        }
        if ( ret1  )
        {
        	cout << "YES" << endl;
        	continue;
		}
        for( i = t2 ; i <= 59; i = i + 0.25 )
        {
            if ( i == h || i == m || i == s )
            {
                ret2 = 0;
            }
        }
        for(i = 0; i <= t1; i = i + 0.25 )
        {
            if ( i == h || i == m || i == s )
            {
                ret2 = 0;
            }
		}
			
        if( ret1 || ret2 ) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}